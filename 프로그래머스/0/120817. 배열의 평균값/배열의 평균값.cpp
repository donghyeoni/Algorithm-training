#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    for(int i : numbers){
        answer += i;
    }
    answer /= size(numbers);
    return answer;
}