#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 1 ; 
    while(true){
        if(6*cnt % n ==  0){
            answer = cnt ; 
            break; 
        }
        else cnt ++;
    }
    return answer;
}