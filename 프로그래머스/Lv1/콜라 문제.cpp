#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n>=a){
        
        n-=a; //빈 병 주기
        n+=b; //콜라 받기
        
        answer+=b;
    }
    
    return answer;
}
