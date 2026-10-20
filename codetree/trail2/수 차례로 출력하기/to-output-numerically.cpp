#include <iostream>
using namespace std;

void DFS1(int N){
    if(N==0) return ;
    DFS1(N -1);
    cout << N << ' ';
}

void DFS2(int N){
    if(N==0) return ;
    cout << N << ' ';
    return DFS2(N-1);
}


int main() {
    int N; 
    cin >> N; 

    DFS1(N);
    cout << endl;
    DFS2(N); 
    // Please write your code here.
    return 0;
}