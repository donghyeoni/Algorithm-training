#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N, M; 
    cin >> N >> M ; 

    while(N > 0){
        cout << N << '\n';
        N = N/M;
    }
    return 0;
}