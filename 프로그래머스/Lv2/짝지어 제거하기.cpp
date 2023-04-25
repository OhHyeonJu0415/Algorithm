#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = true;
    stack<char> S;

    for(int i=0;i<s.size();i++){
        if(!S.empty()){
            if(S.top()==s[i]) S.pop();
            else S.push(s[i]);
        }
        else S.push(s[i]);
    }
    if(!S.empty()) answer=false;
 
    return answer;
}
