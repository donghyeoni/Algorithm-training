#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N ; 
    cin >> N ; 
    vector<int> array(N);

    for(int i = 0 ; i < N ; i++){
        cin >> array[i];
    }

    for(int k : array){
        cout << k*k << ' ';
    }
    
    return 0;
}