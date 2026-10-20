#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m; 
    cin >> n >> m ; 

    int gcd = 1; 

    for(int i = 2 ; i <= n ; i++){
        if((n % i == 0) && (m % i == 0)) gcd = i ;
    }

    cout << gcd; 
    return 0;
}