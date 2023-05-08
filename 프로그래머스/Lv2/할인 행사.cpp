#include <string>
#include <vector>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int count=0;
    vector<int> v;
    v.resize(want.size());
    bool check=true;
    
    for(int i=0;i<discount.size();i++){
        
        check=true;
        for(int j=0;j<want.size();j++){
            if(want[j]==discount[i]){
                v[j]++;
                count++;
                check=false;
                break;
            }
        }
        if(count>10){
            for(int j=0;j<want.size();j++){
                if(want[j]==discount[i-10]){
                    v[j]--;
                    count--;
                    break;
                }  
            }
        }
        if(check){ //원하는 품목이 아닐때
            count=0;
            v.clear();
            v.resize(want.size());
        }
        if(count==10){
            bool checkAnswer=true;
            for(int j=0;j<v.size();j++){
                if(v[j]!=number[j]){
                    checkAnswer=false; break;
                }
            }
            if(checkAnswer) answer++;
        }
    }
    
    return answer;
}
