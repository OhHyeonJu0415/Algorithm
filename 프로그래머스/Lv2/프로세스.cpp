#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue <int> q;
    map<int,int> m;
    bool flag=false;
    
    for(int i=0;i<priorities.size();i++){
        q.push(priorities[i]);
        m[priorities[i]]++;
    }
    
    
    while(!q.empty()){
        
        int now=q.front();
        flag=false;
        
        //우선순위 체크하기
        if(now==9){ //반드시 실행
            q.pop();
            m[now]--;
            answer++;
        }else{
            for(int i=now+1;i<=9;i++){
                if(m[i]>0){ //더 높은 우선순위 존재
                    flag=true;
                    break;
                }
            }
            q.pop();
            
            if(flag){ //더 높은 우선순위 존재
                q.push(now);
            }else{
                m[now]--;
                answer++;
            }
            
        }
        
        //location 체크하기
        if(location==0 && flag){
            location=q.size()-1;
        }
        else if(location==0){
             break;
        }else{
            location-=1;
        }
        
    }
    
    return answer;
}
