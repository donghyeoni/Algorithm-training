#include <iostream>
using namespace std;

int main() {
    int A, B; 
    cin >> A >> B; 
    // Please write your code here.
    while(true){
        if(A > B) break;
        cout << A << ' '; 
        if(A % 2 == 0) A+=3; 
        else if(A % 2) A *= 2; 
    }
    return 0;
}