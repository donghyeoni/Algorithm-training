#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true){
        int k; 
        cin >> k; 
        if(k == 25){
            cout << "Good"; 
            break; 
        }
        else if( k < 25){
            cout << "Higher" << endl;
        }
        else cout << "Lower" << endl;
    }
    return 0;
}