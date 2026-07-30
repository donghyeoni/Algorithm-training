#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int cnt = 0 ; 
    for(int i : num_list){
        if(i%2) cnt ++;
    }
    answer.push_back(size(num_list)-cnt);
    answer.push_back(cnt);
    return answer;
}