#include <string>
#include <vector>

using namespace std;

int x_max = 0; 
int y_max = 0;

int solution(vector<vector<int>> sizes) {
    for(int i = 0 ; i < size(sizes) ; i++){
        if(sizes[i][0] < sizes[i][1]){
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if(sizes[i][0] > x_max) x_max = sizes[i][0];
        if(sizes[i][1] > y_max) y_max = sizes[i][1];
    }
    int answer = x_max * y_max;
    return answer;
}