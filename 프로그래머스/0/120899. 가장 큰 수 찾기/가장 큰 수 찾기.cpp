#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int idx = 0; 
    int maxnum = 0; 
    
    for(int i = 0 ; i < size(array) ; i++){
        if(array[i] > maxnum){
            maxnum = array[i]; 
            idx = i; 
        }
    }
    answer.push_back(maxnum);
    answer.push_back(idx);
    return answer;
}