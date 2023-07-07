#include <string>
#include <bits/stdc++.h>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    double total=0;
    double Intersection=0,Union=0; //교집합, 합집합 총 개수
    
    map<string,int> m1;
    map<string,int> m2;
    
    //모두 대문자로 변환
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    
    //다중집합 만들기
    for(int i=1;i<str1.size();i++){ //문자열1
        if(str1[i]-65<0 || str1[i]-65>25){ //대문자가 아닐 때
            i+=1;
            continue;
        }
        if(str1[i-1]-65<0 || str1[i-1]-65>25){ //대문자가 아닐 때
            continue;
        }
        string temp=str1.substr(i-1,2);
        total++;
        m1[temp]++;
    }
    
    for(int i=1;i<str2.size();i++){ //문자열2
        if(str2[i]-65<0 || str2[i]-65>25){ //대문자가 아닐 때
            i+=1;
            continue;
        }
        if(str2[i-1]-65<0 || str2[i-1]-65>25){ //대문자가 아닐 때
            continue;
        }
        string temp=str2.substr(i-1,2);
        total++;
        m2[temp]++;
    }
    
    
    for (auto iter1 : m1) {
        for(auto iter2 : m2){
            if(iter1.first==iter2.first){
                Intersection+=min(iter1.second,iter2.second);
                Union+=max(iter1.second,iter2.second);
            }
        }
    }
    
    if(Intersection==0 && total-Intersection==0 ) return 65536;
    else{
        double temp = Intersection/(total-Intersection);
        temp*=65536;
        answer=temp;
    }
    return answer;
}
