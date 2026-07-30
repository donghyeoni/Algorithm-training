#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N ;
    cin >> N ;
    int arr[10][10];

    for(int i = 1 ; i <= N ; i++){
        if(i % 2 == 1){
            for(int j = 1 ; j <= N ; j++){
                arr[j][i] = j ;
            }
        }
        else{
            for(int j = 1 ; j <= N ; j++){
                arr[j][i] = N - j + 1 ;
            }
        }
    }   

    for(int i = 1 ; i <=N ; i++){
        for(int j = 1 ; j <= N ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}