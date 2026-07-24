#include <iostream>
#include <string> 
using namespace std;

int main() {
    // Please write your code here.
    string h; 
    cin >> h; 

    h[1] ='a';
    h[h.length()-2] = 'a';

    cout << h; 
    return 0;
}