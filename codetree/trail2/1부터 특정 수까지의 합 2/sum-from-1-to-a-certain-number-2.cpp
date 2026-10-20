#include <iostream>
using namespace std;

int DFS(int N){
    if(N == 1) return 1; 
    return DFS(N-1) + N;
}

int main() {
    // Please write your code here.
    int N ; 
    cin >> N ;
    cout << DFS(N);
    return 0;
}