#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    long long P = stoll(p);
    int Size=t.size()-len+1;
    
    for(int i=0;i<Size;i++){
        long long temp = stoll(t.substr(i,len));
        if(temp<=P) answer++;
    }
    
    
    return answer;
}
