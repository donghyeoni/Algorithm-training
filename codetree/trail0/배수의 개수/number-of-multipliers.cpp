#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A = 0, B = 0; 
    int C = 10; 
    while(C--){
        int k ; 
        cin >> k; 

        if(k%3==0){
            A++;
        }
        if(k%5==0){
            B++;
        }
    }

    cout << A << ' ' << B;

    
    return 0;
}