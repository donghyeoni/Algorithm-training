#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int k ; 
    cin >> k; 

    for(int i = 0 ; i < k ; i++){
        if(i%2){
            for(int j = k ; j > 0 ; j--){
                cout << j ; 
            }
        }
        else{
            for(int j = 1 ; j <=k ; j++){
                cout << j; 
            }
        }
        cout << endl;
    }
    return 0;
}