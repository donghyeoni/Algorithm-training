#include <iostream>
#include <vector>
#include <string> 
using namespace std;

int main() {
    // Please write your code here.
    vector<string> STR = {"apple", "banana" , "grape", "blueberry", "orange"}; 
    char A; 
    cin >> A; 

    int cnt = 0 ; 
    for(int i = 0 ; i < 5 ; i ++){
        if(STR[i][3] == A || STR[i][2] == A){
            cout << STR[i] << endl;
            cnt++;
        }
    }
    cout << cnt; 
    return 0;
}