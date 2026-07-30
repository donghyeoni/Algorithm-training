#include <iostream>
#include <vector>
using namespace std;

int N, M; 

int main() {
    // Please write your code here.
    cin >> N >> M ; 
    vector<vector<int>> arr1(N, vector<int>(M));
    vector<vector<int>> arr2(N, vector<int>(M));

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> arr1[i][j];
        }
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> arr2[i][j];
        }
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            if(arr1[i][j] != arr2[i][j]) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << endl ; 
    }

    return 0;
}