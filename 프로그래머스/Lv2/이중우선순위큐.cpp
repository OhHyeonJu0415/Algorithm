#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer(2,0);
    int countI=0;
    int countD=0;
    priority_queue <int, vector<int> > maxHeap;
    priority_queue <int, vector<int>, greater<int> > minHeap;
    map <int, int> m;
    
    for(int i=0;i<operations.size();i++){
        if(operations[i][0]=='I'){ //삽입
            countI++;
            int num = stoi(operations[i].substr(2,operations[i].size()));
            maxHeap.push(num);
            minHeap.push(num);
            
        }else if(operations[i][2]=='-'){ //최솟값 삭제
            countD++;
            if(countD==countI){
                while(!minHeap.empty()) minHeap.pop();
                while(!maxHeap.empty()) maxHeap.pop();
                countD=0, countI=0;
            }
            if(!minHeap.empty()) minHeap.pop();
            
        }else{ //최댓값 삭제
            countD++;
            if(countD==countI){
                while(!minHeap.empty()) minHeap.pop();
                while(!maxHeap.empty()) maxHeap.pop();
                countD=0, countI=0;
            }
            if(!maxHeap.empty()) maxHeap.pop();
        }
    }
    
    while(!maxHeap.empty()){
        m[maxHeap.top()]++;
        maxHeap.pop();
    }
    while(!minHeap.empty()){
        m[minHeap.top()]++;
        minHeap.pop();
    }
    
    auto iter = m.begin();
    int max=-99999999;
    int min=99999999;
    while(iter!=m.end()){
        if(iter->second>=2){ //존재하는 값
            int num = iter->first;
            if(num<min) min=num;
            if(num>max) max=num;
        }
        iter++;
    }
    if(min==99999999||max==-99999999){
        return answer;
    }
    if(min==max){
        if(min<0) answer[1]=min;
        else answer[0]=min;
    }
    else{
        answer[0]=max;
        answer[1]=min;
    }
    
    return answer;
}
