#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    int total = 0;
    for(int i = 0 ; i < size(sides) - 1 ; i++){
        total += sides[i];
    }
    if(total > sides[size(sides)-1]) answer = 1; 
    else answer = 2; 
    return answer;
}