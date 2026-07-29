#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b; 
    cin >> a >> b; 
    int cnt = 0 ; 

    for(int i = a; i <= b ; i++){
        int count = 0 ; 
        for(int j = 1 ; j <= i ; j++){
            if(i % j == 0) count++;
        }
        if(count == 3) cnt++;
    }
    cout << cnt; 
    return 0;
}