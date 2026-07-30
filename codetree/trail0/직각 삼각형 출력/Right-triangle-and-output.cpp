#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N ; 
    cin >> N  ;

    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= 2*i -1; j++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}