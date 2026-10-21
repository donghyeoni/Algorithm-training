#include <iostream>
#include <string> 
using namespace std;

struct secret{
    string str; 
    char c; 
    int num; 
};

int main() {
    // Please write your code here.
    secret p1;
    cin >> p1.str; 
    cin >> p1.c; 
    cin >> p1.num; 

    cout << "secret code : " << p1.str << endl; 
    cout << "meeting point : " << p1.c << endl; 
    cout << "time : " << p1.num;
    
    return 0;
}