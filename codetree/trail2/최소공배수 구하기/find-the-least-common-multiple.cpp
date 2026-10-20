#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    // Please write your code here.
    int n, m; 
    cin >> n >> m; 

    int lcm = 0;

    for(int i = n*m ; i >= max(n,m) ; i-- ){
        if(i % n == 0 && i % m == 0) lcm = i;  
    }
    
    cout << lcm ;
    return 0;
}