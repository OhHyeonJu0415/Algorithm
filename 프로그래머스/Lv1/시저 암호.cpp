#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int location=0;
    bool flag=false;
    
    for(int i=0;i<s.size();i++){
        flag=false;
        answer+=" ";
        
        if(s[i]==' '){
            answer[i]= ' ';
            continue;
        }
        
        
        if(s[i]-97>=0 && s[i]-97<=25){ //소문자일때
            location = s[i]-97;
            flag=true;
        }else{//대문자일때
            location = s[i]-65;    
        }
        
        if(location+n>=26){ //한바퀴 돌았을 때
            location=n+location-26;
        }else{
            location+=n;
        }
        
        if(flag) location+=97;
        else location+=65;
        
        char temp = (char)location;
        answer[i]=temp;
    }
    
    return answer;
}
