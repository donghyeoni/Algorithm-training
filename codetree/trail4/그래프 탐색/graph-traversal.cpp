#include <iostream>
#include <vector>
using namespace std;

int cnt = 0 ; 
int address[1001] = {};

void dfs(int N, vector<vector<int>> &map){
    for(int k : map[N]){
        if(address[k] == 1) continue; 
        cnt++; 
        address[k] = 1; 
        dfs(k, map);
    }
}

int main() {
    // Please write your code here.
    int N, M; 
    cin >> N >> M; 

    vector<vector<int>> map(N+1);
    
    while(M--){
        int a, b;
        cin >> a >> b; 

        map[a].push_back(b);
        map[b].push_back(a); 
    }

    address[1] = 1;
    dfs(1, map);

    cout << cnt ;
    return 0;
}