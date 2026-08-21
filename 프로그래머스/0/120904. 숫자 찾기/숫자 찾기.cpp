#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string to_str = to_string(num); 
    for(char i : to_str){
        if(i == k+'0') return answer+1; 
        else answer ++;
    }
    return -1;
}