#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    for(int i=0;i<reserve.size();i++){
        for(int j=0;j<lost.size();j++){
            if(reserve[i]==lost[j]){
                lost.erase(lost.begin()+j);
                reserve.erase(reserve.begin()+i);
                i-=1;
                break;
            }
        }
    }

    for(int i=0;i<reserve.size();i++){
        int temp=reserve[i];
        
        for(int j=0;j<lost.size();j++){          
            if(lost[j]==temp-1||lost[j]==temp+1){
                lost.erase(lost.begin()+j);
                break;
            }
        }
    }

    answer=n-lost.size();
    return answer;
}
