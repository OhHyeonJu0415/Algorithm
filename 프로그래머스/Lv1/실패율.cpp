#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

//실패율 == (현재 스테이지 수) / (현재 스테이지~ 최종스테이지 N+1 다 더한 수)

bool cmp(pair<int,double> a, pair<int,double> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    double arr[502]={0,}; //스테이지별 인원 수
    vector < pair <int,double> > v; //스테이지별 실패율
    double total[502]={0,}; //스테이지별 도달한 플레이어 수
    double fail=0.0; //실패율
    
    for(int i=0;i<stages.size();i++){
        arr[stages[i]]++;
    }
    
    total[N+1]=arr[N+1];
    
    for(int i=N;i>=1;i--){
        total[i]=total[i+1]+arr[i];
    }
    
    for(int i=1;i<=N;i++){
        if(total[i]==0) fail=0;
        else fail=arr[i]/total[i];
        v.push_back(make_pair(i,fail));
    }
    
    
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<v.size();i++){
        answer.push_back(v[i].first);
    }
    
    return answer;
}
