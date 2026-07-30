#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0; 

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            int k ; 
            cin >> k ;
            if(k%5==0) cnt ++;
        }
    }
    cout << cnt;
    return 0;
}