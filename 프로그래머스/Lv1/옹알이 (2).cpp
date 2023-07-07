#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int solution(vector<string> babbling) {
    int answer = 0;
    string word=""; //이전 발음 단어
    bool flag=false;
    
    for(int i=0;i<babbling.size();i++){
        
        for(int j=0;j<babbling[i].size();j++){
            if(j+2<babbling[i].size() && word!="aya" && babbling[i].substr(j,3) == "aya"){
                word="aya";
                flag=true;
                j+=2;
            }
            else if(j+1<babbling[i].size() && word!="ye" && babbling[i].substr(j,2) == "ye"){
                word="ye";
                flag=true;
                j+=1;
            }
            else if(j+2<babbling[i].size() && word!="woo" && babbling[i].substr(j,3) == "woo"){
                word="woo";
                flag=true;
                j+=2;
            }
            else if(j+1<babbling[i].size() && word!="ma" && babbling[i].substr(j,2) == "ma"){
                word="ma";
                flag=true;
                j+=1;
            }
            else{
                flag=false;
                break;
            }
        }
        word="";
        
        if(flag){ //발음 가능한 단어
            answer++;
            flag=false;
        }
    }
    
    return answer;
}
