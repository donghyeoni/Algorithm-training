#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    char target = letter[0];
    
    // my_string에서 target과 일치하는 문자를 지우고 크기를 재조정합니다.
    my_string.erase(remove(my_string.begin(), my_string.end(), target), my_string.end());
    
    return my_string;
}
