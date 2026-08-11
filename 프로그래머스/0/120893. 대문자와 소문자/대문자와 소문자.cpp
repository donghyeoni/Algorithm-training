#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char i : my_string){
        if(i >= 'a' && i <= 'z') answer.push_back('A'- 'a' + i);
        else answer.push_back('a'-'A'+i);
    }
    return answer;
}