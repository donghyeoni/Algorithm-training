#include<vector>
#include<queue>
using namespace std;

bool in_range(int x, int y, int a, int b){
    return 0 <= x && x < a && 0 <= y && y < b;
}

int dxs[4] = {1,0,-1,0};
int dys[4] = {0,1,0,-1};

int solution(vector<vector<int> > maps)
{
    int a = maps.size();
    int b = maps[0].size();
    vector<vector<int>> visited(a, vector<int>(b,0));
    
    queue<pair<int, int>> q; 
    q.push({0, 0});
    visited[0][0] = 1; 
    
    while(!q.empty()){
        pair<int, int> cur= q.front(); q.pop();
        int x = cur.first;
        int y = cur.second; 
        
        if(x == a - 1 && y == b - 1) return maps[x][y];
        
        for(int i = 0 ; i < 4 ; i++){
            int dx = x + dxs[i];
            int dy = y + dys[i];
            if(in_range(dx,dy,a,b)){
                if(visited[dx][dy]==0 && maps[dx][dy]==1){
                    visited[dx][dy] = 1; 
                    maps[dx][dy] += maps[x][y];
                    q.push({dx,dy});
                } 
            }
        }
    }
    return -1; 
}