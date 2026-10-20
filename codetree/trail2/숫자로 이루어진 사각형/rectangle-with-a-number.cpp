#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N ; 
    cin >> N ; 

    int cnt = 1; 
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ;  j  < N ; j++){
            cout << cnt << " ";
            cnt++;
            if(cnt == 10) cnt = 1; 
        }
        cout << endl;
    }
    return 0;
}