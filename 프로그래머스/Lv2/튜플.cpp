#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
    int start=2;
    int now=2;
    string tuple="";
    map<string, int> m;
    
    while(now<s.length()-1){
        
        if(s[now]=='}'){
            tuple = s.substr(start,now-start);
            m[tuple]++;
            now+=3;
            start=now;
        }
        else if(s[now]==','){
            tuple=s.substr(start,now-start);
            m[tuple]++;
            start=now+1;
            now+=1;
        }else{
            now+=1;
        }
        
    }
    
    vector< pair <string, int> > v (m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<v.size();i++){
        answer.push_back(stoi(v[i].first));
    }
    
    
    return answer;
}
