#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int arr[26];
    fill(arr,arr+26,-1);
    
    for(int i=0;i<s.size();i++){
        int index = s[i]-97;
        if(arr[index]<0){ //처음 등장한 단어
            answer.push_back(-1);
            arr[index]=i;
        }else{ //앞서 등장한 단어
            answer.push_back(i-arr[index]);
            arr[index]=i;
        }
        
    }
    
    
    return answer;
}
