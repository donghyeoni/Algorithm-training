#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = lcm(denom1, denom2);
    int b = numer1*(a/denom1) + numer2*(a/denom2);
    int c = gcd(a,b);
    answer.push_back(b/c);
    answer.push_back(a/c);
    return answer;
}