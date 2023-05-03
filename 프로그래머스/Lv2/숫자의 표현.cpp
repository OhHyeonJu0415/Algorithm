#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int temp=0;
    
    for(int i=1;i<=n;i++){
        temp=i;
        for(int j=i+1;j<=n;j++){
            if(temp+j>n) break;
            else if(temp+j==n){
                answer++;
                break;
            }else{
                temp+=j;
            }
        }
    }
    
    return answer;
}
