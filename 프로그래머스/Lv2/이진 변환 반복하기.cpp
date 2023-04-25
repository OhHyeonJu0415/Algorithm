#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    
    while(s!="1"){
        int len=s.size();
        int zero=0;
        
        for(int i=0;i<len;i++){
            if(s[i]=='0') zero++;
        }
        
        answer.front()++;
        answer.back()+=zero;
        
        //문자열 길이
        len-=zero;
        string v;
        while(len>=1){
            v+=to_string(len%2);
            len=len/2;
            if(len==1){
                v+="1";
                break;
            }
        }
        reverse(v.begin(), v.end());
        s=v;
        
    }
    
    return answer;
}
