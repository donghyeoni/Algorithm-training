#include <iostream> 
#include <string> 

using namespace std; 

int main(void) { 
    string str; 
    cin >> str; 
    
    // C++17부터 size(str) 사용 가능, 안전하게 str.size()를 써도 좋습니다.
    for(int i = 0 ; i < str.size() ; i++){ 
        // 조건을 대문자 범위로 정확하게 지정합니다.
        if(str[i] >= 'A' && str[i] <= 'Z') { 
            str[i] = str[i] - 'A' + 'a'; // 대문자를 소문자로
        } 
        else if(str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 'a' + 'A'; // 소문자를 대문자로
        } 
    } 
    
    cout << str; 
    return 0; 
}