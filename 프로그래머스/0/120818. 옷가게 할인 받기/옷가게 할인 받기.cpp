#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if (price >= 500000) {
        return price * 80 / 100; // 20% 할인, 자동 버림
    } 
    if (price >= 300000) {
        return price * 90 / 100; // 10% 할인, 자동 버림
    } 
    if (price >= 100000) {
        return price * 95 / 100; // 5% 할인, 자동 버림
    }
    return price; // 10만원 미만은 원래 가격 그대로
}
