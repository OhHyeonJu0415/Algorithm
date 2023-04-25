#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int Index=0;
    queue<int> q;
    
    for(int i=0;i<progresses.size();i++){
        q.push(i);
    }
    
    while(!q.empty()){
        if(progresses[q.front()]>=100){
            int count=1;
            q.pop();
            if(!q.empty()){
                for(int i=q.front();i<progresses.size();i++){
                    if(progresses[i]>=100 ){
                        count+=1;
                        q.pop();
                    }else{
                        break;
                    }
                }
                
            }
             answer.push_back(count);
        }
        
        for(int i=q.front();i<progresses.size();i++){
            progresses[i]+=speeds[i];
        }
    }
    
    return answer;
}
