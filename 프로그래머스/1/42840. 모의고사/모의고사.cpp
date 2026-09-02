#include <string>
#include <vector>
#include <cmath>

using namespace std;
int A[5] = {1,2,3,4,5};
int B[8] = {2,1,2,3,2,4,2,5};
int C[10] = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[3] = {};
    for(int i = 0 ; i < answers.size() ; i++){
        int ans = answers[i];
        if(ans == A[i%5]) score[0]++;
        if(ans == B[i%8]) score[1]++;
        if(ans == C[i%10]) score[2]++;
    }
    int max_idx = -1 ;
    int max_num = -1 ; 
    for(int i = 0 ; i < 3 ; i++){
        if(max_num < score[i]){
            max_num = score[i]; 
            max_idx = i; 
        }
    }
    answer.push_back(max_idx+1);
    for(int i = 0 ; i < 3; i++){
        if(i == max_idx) continue; 
        if(max_num == score[i]) answer.push_back(i+1); 
    }
    
    return answer;
}