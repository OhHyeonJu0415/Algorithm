#include <bits/stdc++.h>

using namespace std;

string number(int num, int k){ //진수 변환하기
    
    string answer="";
    
    while(num>=1){
        if(num==1){
            answer+="1";
            break;
        }
        if(num%k==0) answer+="0";
        else{
            string temp=to_string(num%k);
            answer+=temp;
        }
        
        num/=k;
    }
    reverse(answer.begin(),answer.end());
    return answer;
}

bool isPrime(long long num){
    
    if(num==1) return false;
    if(num==2) return true;
    
    for(int i=2;i<sqrt(num)+1;i++){
        if(num%i==0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string num=number(n,k);
    int zero=0;
    int Size=num.size();
    int start=0;
    int zeroPosi=0;
    vector<long long> v;
    
    for(int i=0;i<Size;i++){
        if(num[i]=='0') zero++;
    }
    
    if(zero==0){ //P만 가능할 때
        if(isPrime(stoll(num))) return 1;
        else return 0;
    }
    
    for(int i=0;i<Size;i++){
        if(num[i]!='0'){
            start=i;
            break;
        }
    }
    
    for(int i=start+1;i<Size;i++){
        if(num[i]=='0'){
            string temp = num.substr(start,i-start);
            if(temp.size()>0){
                v.push_back(stoll(temp));
            }
            start=i+1;
            // cout<<start<<endl;
        }
    }
    
    if(num[Size-1]!='0'){
        
        string temp=num.substr(start,Size-start);
        if(temp.size()>0) v.push_back(stoll(temp));
    }
    
    for(int i=0;i<v.size();i++){
        if(isPrime(v[i])) answer++;
    }
    
    
    return answer;
}
