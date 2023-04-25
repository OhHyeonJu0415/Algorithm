#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    bool check=false;
    for(int i=brown/2;i>=1;i--){
        for(int j=1;j<=brown/2;j++){
            if(i*j==brown+yellow && yellow==i*j-2*i-(2*j-4)){
                answer.push_back(i);
                answer.push_back(j);
                check=true;
                break;
            }
        }
        if(check) break;
    }
    return answer;
}
