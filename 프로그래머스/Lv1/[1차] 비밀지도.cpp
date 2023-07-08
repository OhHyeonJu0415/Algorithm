#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string trans(int num, int n){
    string answer="";
    string temp="";
    
    if(num==1) answer+="1";
    while(num>1){
        
        if(num%2==0) answer+="0";
        else answer+="1";
        
        num/=2;
        
        if(num==1){
            answer+="1";
            break;
        }
        
    }
    
    
    for(int i=0;i<n-answer.size();i++){
        temp+="0";
    }
    
    reverse(answer.begin(),answer.end());
    answer=temp+answer;
    
    return answer;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> v1;
    vector<string> v2;
    
    for(int i=0;i<n;i++){
        v1.push_back(trans(arr1[i],n));
        v2.push_back(trans(arr2[i],n));
    }
    
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=0;j<n;j++){
            if(v1[i][j]=='0'&&v2[i][j]=='0') temp+=" ";
            else temp+="#";
        }
        answer.push_back(temp);
    }
    
    return answer;
}
