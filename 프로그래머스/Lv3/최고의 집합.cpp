#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int x=0, y=0; 
    
    if(s<=n){ //집합이 존재하지 않는 경우
        answer.push_back(-1);
        return answer;
    }
    x=s/n;
    if(s%n==0){
        for(int i=0;i<n;i++){
            answer.push_back(x);
        }
    }
    else{
        y=s%n;
        for(int i=0;i<n-y;i++){
            answer.push_back(x);
        }
        for(int i=answer.size();i<n;i++){
            answer.push_back(x+1);
        }
    }
    
    return answer;
}
