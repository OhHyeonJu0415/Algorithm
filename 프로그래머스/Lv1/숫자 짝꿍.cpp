#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<int,int> x;
    map<int,int> y;
    int temp=0;
    
    for(int i=0;i<X.size();i++){
        temp = X[i]-48;
        x[temp]++;
    }
    
    for(int i=0;i<Y.size();i++){
        temp = Y[i]-48;
        y[temp]++;
    }
    
    
    for(int i=0;i<10;i++){
        int count=0;
        if(x[i]>0 && y[i]>0){
            count=x[i];
            if(y[i]<x[i]) count=y[i];
            for(int j=0;j<count;j++){
                answer+=to_string(i);
            }
        }
    }
    
    if(answer=="") return "-1";
    
    bool checkZero=false;
    for(int i=0;i<answer.size();i++){
        if(answer[i]!='0'){
            checkZero=true;
            break;
        }
    }
    
    if(!checkZero) answer="0";
    else sort(answer.begin(), answer.end(),greater<int>());
    
    return answer;
}
