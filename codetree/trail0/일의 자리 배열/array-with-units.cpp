#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[10];
    cin >> array[0] >> array[1];

    for(int i = 2 ; i < 10 ; i++){
        array[i] = (array[i-1] + array[i-2])%10;
    }

    for(int i : array){
        cout << i << ' ';
    }
}