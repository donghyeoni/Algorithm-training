#include <iostream>
using namespace std;

int map[101][101];
int address[101][101]; 

int dxs[2] = {0,1};
int dys[2] = {1,0};

bool in_range(int x, int y, int N, int M){
    return (1 <= x && x <= N && 1 <= y && y <= M);
}

int dfs(int x, int y, int N, int M){
    if(x == N && y == M) return 1;

    for(int i = 0 ; i < 2 ; i++){
        int dx = x + dxs[i]; 
        int dy = y + dys[i];
        if(in_range(dx, dy, N, M) && map[dx][dy] == 1 && address[dx][dy] == 0){
            address[dx][dy] = 1; 
            if(dfs(dx, dy, N, M)) return 1;
        }
    }
    return 0;
}

int main() {
    // Please write your code here.
    int N, M; 
    cin >> N >> M; 

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= M ; j++){
            cin >> map[i][j]; 
        }
    }

    address[1][1] = 1; 
    cout <<  dfs(1, 1, N , M);
    return 0;
}