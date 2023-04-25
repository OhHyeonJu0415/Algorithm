#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int h=0;
    bool check=false;
    sort(citations.begin(),citations.end());
    reverse(citations.begin(),citations.end());
    
    for(int i=0;i<=citations.size();i++){
        
        if(i>=citations[i]){
            answer=i;
            break;
        }
    }
    
    
    return answer;
}
