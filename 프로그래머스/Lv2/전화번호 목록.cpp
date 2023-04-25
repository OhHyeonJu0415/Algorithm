#include <string>
#include <vector>
#include <algorithm>  

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    string beforeText,nowText;
    
    sort(phone_book.begin(),phone_book.end());
    
    for(int i=0;i<phone_book.size()-1;i++){
        beforeText=phone_book[i];
        nowText=phone_book[i+1];
        if(string::npos!=nowText.find(beforeText)){
            for(int j=0;j<beforeText.size();j++){
                if(beforeText[j]!=nowText[j]){
                    break;
                }
                if(j==beforeText.size()-1)  return false;
            }
           
        }
        
    }
    return answer;
}
