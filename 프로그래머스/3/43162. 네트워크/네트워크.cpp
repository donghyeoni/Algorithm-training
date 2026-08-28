#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<int> visited(n,0);
    
    for(int i = 0 ; i < n ; i ++){
        if(visited[i]) continue; 
        visited[i] = 1; 
        answer ++;
        
        queue<int> q; 
        q.push(i);
        
        while(!q.empty()){
            int p = q.front(); q.pop();
            
            for(int j = 0 ; j < n ; j++ ){
                if(visited[j]) continue;
                if(computers[p][j] == 1) {
                    visited[j] = 1; 
                    q.push(j);
                }
            }
        }    
    }
    return answer;
}