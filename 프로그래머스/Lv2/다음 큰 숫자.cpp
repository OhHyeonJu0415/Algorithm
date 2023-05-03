#include <string>
#include <vector>

using namespace std;

int change(int n){
    int answer=1;
    
    while(n>1){
        if(n%2!=0) answer++;
        n=n/2;
    }
    
    return answer;
}

int solution(int n) {
    int answer = 0;
    int num = change(n);
    int temp=-1;
    int Index=0;
    
    while(num!=temp){
        Index++;
        temp = change(n+Index);
    }
    
    answer=n+Index;
    
    return answer;
}
