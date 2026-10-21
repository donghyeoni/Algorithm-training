#include <iostream>
#include <vector>
#include <climits>  
using namespace std;

vector<int> arr; 

int main() {
    // Please write your code here.
    int N; 
    cin >> N ; 

    while(N--){
        int n;
        cin >> n; 
        arr.push_back(n);
    }

    int answer = INT_MAX;

    for(int i = 0 ; i < size(arr) ; i++){
        int count = 0 ; 
        for(int j = 0 ; j < size(arr) ; j++){ 
            count += abs(i-j)*arr[j];
        }
        if(count < answer) answer = count ;
    }

    cout << answer; 
    return 0;
}