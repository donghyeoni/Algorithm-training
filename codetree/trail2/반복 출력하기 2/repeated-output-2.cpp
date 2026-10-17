#include <iostream>

using namespace std;

int N;

int dfs(int N){
    if(N == 0) return 0; 
    cout << "HelloWorld" << endl;
    return dfs(N-1);
}

int main() {
    cin >> N;
    dfs(N);
    return 0;
}