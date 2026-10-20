#include <iostream>
using namespace std;

int DFS(int N){
    if(N==0) return 0; 
    return DFS(N/10) + (N%10)*(N%10);
}

int main() {
    // Please write your code here.
    int N ;
    cin >> N ; 
    cout << DFS(N);
    return 0;
}