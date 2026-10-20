#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> arr;

int main() {
    // Please write your code here.
    int n; 
    cin >> n; 

    while(n--){
        int a; 
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    for(int i = 0 ; i < size(arr) ; i++){
        cout << arr[i] << ' ';
    }
    cout << endl; 

    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = 0 ; i < size(arr) ; i++){
    cout << arr[i] << ' ';
    }

    return 0;
}