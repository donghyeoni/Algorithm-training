#include <iostream>
#include <queue> 
#include <vector> 
using namespace std;

int map[101][101];
int address[101][101];
int dxs[4] = {0,0,1,-1};
int dys[4] = {1,-1,0,0};

bool flag = false; 

void Receive(int N, int M){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> map[i][j];
        }
    }
}

bool in_range(int x, int y, int N, int M){
    return 0 <= x && x < N && 0 <= y && y < M;
}

int main() {
    // Please write your code here.
    int N, M; 
    cin >> N >> M; 

    Receive(N, M);

    queue<pair<int,int>> qu; 
    qu.push({0,0});
    address[0][0] = 1; 

    while(!qu.empty()){
        auto [x, y] = qu.front(); qu.pop();
        if(x == N-1 && y == M-1){
            flag = true; 
            break;
        }

        for(int i = 0 ; i < 4 ; i++){
            int dx = x + dxs[i]; 
            int dy = y + dys[i]; 
            if(in_range(dx, dy, N, M) && map[dx][dy] && address[dx][dy] == 0){
                address[dx][dy] = 1; 
                qu.push({dx, dy});
            }
        }

    }

    if(flag) cout << 1; 
    else cout << 0;

    return 0;
}