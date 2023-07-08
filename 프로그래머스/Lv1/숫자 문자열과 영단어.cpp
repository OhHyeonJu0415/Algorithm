#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string arr[10]={
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};


int solution(string s) {
    int answer = 0;
    string temp="";
    int i=0;
    while(i<s.size()){
        int index=s[i]-48;
        if(index>=0&&index<=9){ //숫자일때
            temp+=s[i];
            i++;
        }else{
            for(int j=0;j<10;j++){
                if (s.substr(i,5).find(arr[j]) != string::npos){
                    temp+=to_string(j);
                    i+=arr[j].size();
                    break;
                }
            }
        }
    }
    
    answer=stoi(temp);
    
    return answer;
}
