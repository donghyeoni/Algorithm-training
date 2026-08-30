#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char k : my_string){
        if(k >= 'a' && k <= 'z'){
            answer.push_back(k);
        }
        else{
            answer.push_back(char(k-'A'+'a'));
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}