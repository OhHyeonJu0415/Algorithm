#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            answer+=s[i];
        }
        else if(s[i-1]==' '||i==0){
            answer+=toupper(s[i]);
        }else{
            answer+=tolower(s[i]);
        }
    }
    return answer;
}
