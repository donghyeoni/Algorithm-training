#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cnt = 0 ; 
int countt = 0 ;
vector<int> answer;

int dxs[4] = {0,0,-1,1};
int dys[4] = {1,-1,0,0};
int map[25][25];
int address[25][25];

bool in_range(int x, int y, int N){
    return 0 <= x && x < N && 0 <= y && y < N;
}

void dfs(int x, int y, int N){
    address[x][y] = 1; 
    cnt ++; 
    for(int i = 0 ; i < 4 ; i++){
        int dx = x + dxs[i];
        int dy = y + dys[i];

        if(in_range(dx, dy, N) && address[dx][dy] == 0 && map[dx][dy] == 1){
            dfs(dx, dy, N);
        }
    }
}


int main() {
    // Please write your code here.
    int N ; 
    cin >> N ; 

    for(int i = 0 ; i < N  ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> map[i][j];
        }
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            if(map[i][j] == 1 && address[i][j] == 0){
                countt ++; 
                dfs(i, j, N);
                answer.push_back(cnt);
                cnt = 0 ; 
            }
        }
    }
    cout << countt << endl;
    sort(answer.begin(), answer.end());
    for(int i : answer){
        cout << i << endl;
    }
    return 0;
}