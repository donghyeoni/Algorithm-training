#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0 ; 
    int N; 
    cin >> N ;
    for(int i = 1 ; i <= N ; i++){
        if(i%2 == 0 || i %3 == 0 || i % 5 == 0) continue; 
        cnt ++;
    }

    cout << cnt; 
    return 0;
}