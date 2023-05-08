#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2,0);
    multiset<int> ms;
    multiset<int>::iterator iter;
    
    for(int i=0;i<operations.size();i++){
        if(operations[i][0]=='I'){ //삽입
            
           ms.insert(stoi(operations[i].substr(2,operations[i].size())));
            
        }else if(operations[i][2]=='-'){ //최솟값 삭제
           
            if(!ms.empty()) ms.erase(ms.begin());
            
        }else{ //최댓값 삭제
            
            if(!ms.empty()) ms.erase(--ms.end());
        }
    }
    
    if(ms.size()!=0){
        answer[0]=*(--ms.end());
        answer[1]=*ms.begin();
    }
    
    
    return answer;
}
