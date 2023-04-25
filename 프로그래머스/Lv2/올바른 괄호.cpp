#include<string>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> S;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            S.push(1);
        }else{
            if(!S.empty()){
                S.pop();
            }else{
                return false;
            }
        }
    }
    
    if(!S.empty()) answer=false;

    return answer;
}
