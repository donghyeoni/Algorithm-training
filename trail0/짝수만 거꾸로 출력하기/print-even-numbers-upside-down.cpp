#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int N ;
    cin >> N; 
    vector<int> arr(N);

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    
    for(int i = arr.size()-1; i >= 0 ; i-- ){
        if(arr[i]%2==0) cout << arr[i] <<' ';
    }

    return 0;
}