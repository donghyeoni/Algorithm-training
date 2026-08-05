#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char i : my_string){
        if(i == 'a' || i == 'e' || i == 'o' || i == 'u' || i == 'i'){
            continue; 
        }
        else answer.push_back(i);
    }
    return answer;
}