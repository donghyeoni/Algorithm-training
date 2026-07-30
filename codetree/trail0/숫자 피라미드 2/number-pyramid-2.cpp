#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; 
    cin >> N; 
    int cnt = 0 ; 

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= i ; j++){
            cnt ++;
            cout << cnt << ' ';
        }
        cout << endl;
    }
    return 0;
}