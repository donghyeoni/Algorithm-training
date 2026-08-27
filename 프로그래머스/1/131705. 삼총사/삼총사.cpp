#include <string>
#include <vector>
using namespace std;

int cnt = 0 ; 
void dfs(vector<int> number, int idx, int level, int total){
    if(level == 3 && total == 0){
        cnt++;
        return; 
    }
    else if(level == 3) return ;
       
    for(int i = idx ; i < size(number) ; i++){
        total += number[i]; 
        dfs(number, i+1, level+1, total);
        total -= number[i];  
    }
}

int solution(vector<int> number) {
    dfs(number, 0, 0, 0);
    return cnt;
}