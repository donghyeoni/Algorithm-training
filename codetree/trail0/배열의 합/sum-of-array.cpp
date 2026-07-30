#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i = 0 ; i < 4 ; i++){
        int cnt = 0 ; 
        for(int j = 0 ; j < 4 ; j++){
            int k; 
            cin >> k; 
            cnt += k; 
        }
        cout << cnt << endl;
    }
    return 0;
}