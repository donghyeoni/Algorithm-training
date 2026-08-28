#include <string>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

bool simil(string cur, string next){
    int n = 0;
    for(int i = 0 ; i < size(cur) ; i++){
        if(cur[i] != next[i]) n++;
    }
    return n == 1; 
}

int solution(string begin, string target, vector<string> words) {
    vector<int> visited(size(words),0);
    
    queue<pair<string, int>> q; q.push({begin, 0});
    while(!q.empty()){
        pair<string, int> cur = q.front(); q.pop();

        if(cur.first == target) return cur.second; 
        
        for(int i = 0 ; i < size(words) ; i++){
            if(simil(words[i], cur.first)){
                if(visited[i]) continue; 
                visited[i] += 1;
                q.push({words[i], cur.second+1});
            }
        }
    }
    return 0;
}