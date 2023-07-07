#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    vector<int> v;
    
    for(int i=1;i<food.size();i++){
        if(food[i]<2) continue;
        for(int j=0;j<food[i]/2;j++){
            v.push_back(i);
        }
    }
    
    for(int i=0;i<v.size();i++){
        answer+=to_string(v[i]);
    }
    answer+="0";
    
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        answer+=to_string(v[i]);
    }
    
    
    
    return answer;
}
