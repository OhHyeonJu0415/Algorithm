#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    int size=s.size();
    stack<char> rotate;
    
    for(int i=0;i<size;i++){
        int j=(i+1)%size;
        bool check=true;
        if(s[i]==']'||s[i]==')'||s[i]=='}') continue;
        
        if(s[i]=='(') rotate.push('(');
        else if(s[i]=='{') rotate.push('{');
        else rotate.push('[');
        
        
        while(j!=i){
            
            if(s[j]==')'){
                if(rotate.empty()){
                    check = false;
                    break;
                }
                else if(rotate.top()!='('){
                    check = false;
                    break;
                }
                else rotate.pop();
                
            }else if(s[j]=='}'){
                if(rotate.empty()){
                    check=false;
                     break;
                }
                else if(rotate.top()!='{'){
                    check = false;
                    break;
                }
                else rotate.pop();
                
            }else if(s[j]==']'){
                if(rotate.empty()){
                    check=false;
                     break;
                }else if(rotate.top()!='['){
                    check = false;
                    break;
                }
                else rotate.pop();
                
            }else{
                rotate.push(s[j]);
                
            }
            j=(j+1)%size;
        }
        if(check && rotate.empty()) answer++;
    }
    
    return answer;
}
