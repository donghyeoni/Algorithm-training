#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int num_max = -2147483648 ; 
    for(int i = 0 ; i < size(numbers) ; i++){
        for(int j = i+1 ; j < size(numbers) ; j++){
            if(numbers[i]*numbers[j] > num_max){
                num_max = numbers[i]*numbers[j]; 
            }
        }
    }
    answer = num_max; 
    return answer;
}