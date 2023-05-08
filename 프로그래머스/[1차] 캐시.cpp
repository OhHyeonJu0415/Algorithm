#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector <string> v;
    
    if(cacheSize==0){
        return 5*cities.size();
    }
    
    for(int i=0;i<cities.size();i++){
        string temp=cities[i];
        for(int j=0;j<temp.size();j++){ //대소문자 변환
            temp[j] = tolower(temp[j]);
        }
        bool check=false;
        for(int j=0;j<v.size();j++){
            if(v[j]==temp){
                check=true;
                v.erase(v.begin()+j);
                break;
            }
        }
        if(check){ //cache hit
            answer+=1;
        }else{//cache miss
            answer+=5;
        }
        if(v.size()>=cacheSize){
            v.erase(v.begin());
        }
        v.push_back(temp);
    }
    
    return answer;
}
