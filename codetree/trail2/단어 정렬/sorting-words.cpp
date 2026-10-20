#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    vector<string> str; 

    int n ; 
    cin >> n; 

    while(n--){
        string ss; 
        cin >> ss; 
        str.push_back(ss);
    }

    sort(str.begin(), str.end());

    for(int i = 0 ; i < size(str) ; i++){
        cout << str[i] << '\n';
    }
    return 0;
}