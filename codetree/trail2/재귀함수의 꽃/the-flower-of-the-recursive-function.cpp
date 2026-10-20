#include <iostream>
using namespace std;

void DFS(int N){
    if(N == 0) return ;
    cout << N << ' ';
    DFS(N-1);
    cout << N << ' ';
}

int main() {
    // Please write your code here.
    int N ; 
    cin >> N;
    DFS(N);
    return 0;
}