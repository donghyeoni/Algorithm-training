#include <string>
#include <vector>
using namespace std;
string words[4] = {"aya","ye","woo","ma"};  

bool match(string word){
    for(int i = 0 ; i < 4 ; i++){
        if(words[i] == word) return true;
        for(int j = 0 ; j < 4 ; j++){
            if(i == j) continue; 
            if(words[i]+words[j] == word) return true;
            for(int k = 0 ; k < 4 ; k++){
                if(k == i || k == j) continue; 
                if(words[i] + words[j] + words[k] == word) return true; 
                for(int l = 0 ; l < 4 ; l++){
                    if(l == i || l == j || l == k) continue; 
                    if(words[i] + words[j] + words[k] + words[l] == word){
                        return true;
                    }
                }
            }
        }
    }
    return false; 
}
    
int solution(vector<string> babbling) {
    int answer = 0 ; 
    for(string i : babbling){
        if(match(i)) answer++; 
    }
    return answer;
}