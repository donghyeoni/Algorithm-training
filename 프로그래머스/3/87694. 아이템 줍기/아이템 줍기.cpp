#include <string>
#include <vector>
#include <queue>

using namespace std;

// 좌표를 2배로 늘리므로 배열 크기를 102로 확장
vector<vector<int>> map(102, vector<int>(102, 0));
vector<vector<int>> dist(102, vector<int>(102, 0));

int dxs[4] = {0, 0, 1, -1};
int dys[4] = {-1, 1, 0, 0};

bool in_range(int x, int y) {
    return x > 0 && x < 102 && y > 0 && y < 102; 
}

void make_path(const vector<int>& cor) {
    for (int i = cor[0]; i <= cor[2]; i++) {
        map[i][cor[1]] = 1; 
        map[i][cor[3]] = 1;
    }
    for (int j = cor[1]; j <= cor[3]; j++) {
        map[cor[0]][j] = 1; 
        map[cor[2]][j] = 1; 
    }
}

void remove_path(const vector<vector<int>>& rectangle) {
    for (int i = 0; i < rectangle.size(); i++) {
        int x1 = rectangle[i][0];
        int y1 = rectangle[i][1];
        int x2 = rectangle[i][2];
        int y2 = rectangle[i][3];
        for (int j = x1 + 1; j < x2; j++) {
            for (int k = y1 + 1; k < y2; k++) {
                if (map[j][k]) map[j][k] = 0; 
            }
        }
    }
}

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    // 1. 모든 직사각형 좌표를 2배로 확대
    for (int i = 0; i < rectangle.size(); i++) {
        for (int j = 0; j < 4; j++) {
            rectangle[i][j] *= 2;
        }
    }
    
    // 시작점 및 목적지 좌표도 2배로 확대
    characterX *= 2;
    characterY *= 2;
    itemX *= 2;
    itemY *= 2;

    // 2. 테두리 그리기 및 내부 제거
    for (int i = 0; i < rectangle.size(); i++) {
        make_path(rectangle[i]);
    }
    remove_path(rectangle);

    // 3. BFS 최단거리 탐색
    queue<pair<int, int>> q; 
    q.push({characterX, characterY});
    dist[characterX][characterY] = 1; 

    while (!q.empty()) {
        auto [x, y] = q.front(); 
        q.pop(); 

        if (x == itemX && y == itemY) {
            // 2배 확대한 상태의 이동 거리이므로 최종 답은 2로 나눠줌
            return (dist[x][y] - 1) / 2;
        }

        for (int i = 0; i < 4; i++) {
            int dx = x + dxs[i];
            int dy = y + dys[i];

            if (in_range(dx, dy) && map[dx][dy] && dist[dx][dy] == 0) {
                q.push({dx, dy});
                dist[dx][dy] = dist[x][y] + 1; 
            }
        }
    }

    return -1;
}