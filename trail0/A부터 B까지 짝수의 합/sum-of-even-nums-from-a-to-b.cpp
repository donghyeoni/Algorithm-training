#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B; 
    int count=0;

    cin >> A >> B; 

    for(int i = A ; i <= B ; i++){
        if(i % 2) continue; 
        count += i ;
    }

    cout << count ;
    return 0;
}