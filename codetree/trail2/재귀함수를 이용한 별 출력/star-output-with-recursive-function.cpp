#include <iostream>
using namespace std;


void DFS(int N){
    if(N == 0) return ; 
    DFS(N-1);
    for(int i = 0 ; i < N ; i++){
        cout << '*';
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    int N; 
    cin >> N; 

    DFS(N);
    return 0;
}