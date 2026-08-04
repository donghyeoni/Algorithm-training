#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    // 입력 원소의 범위가 0 ~ 999이므로 1000칸을 0으로 초기화
    vector<int> count(1000, 0);
    
    // 각 숫자의 빈도수 계산
    for(int i : array){
        count[i]++;
    }
    
    // 가장 높은 빈도수(최댓값) 찾기
    int max_freq = *max_element(count.begin(), count.end());
    
    int mode_value = -1; // 최빈값 저장 변수
    int duplicate_count = 0; // 최빈값의 개수 세기
    
    for(int i = 0; i < 1000; i++) {
        if(count[i] == max_freq) {
            mode_value = i; // 최빈값인 숫자(인덱스) 기록
            duplicate_count++;
        }
    }
    
    // 최빈값이 여러 개면 -1, 하나면 해당 숫자 반환
    if(duplicate_count > 1) {
        return -1;
    }
    
    return mode_value;
}
