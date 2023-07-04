#include <string>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int now=0, before=0; //현재 점수, 이전 점수
    int index=0, i=1; //라운드 시작 인덱스, 라운드 보너스 인덱스
    
    while(i<dartResult.length()){
        
        //보너스 처리 및 라운드 구분
        if(dartResult[i]=='S'||dartResult[i]=='D'||dartResult[i]=='T'){
            
            answer+=now;
            before=now;
            now = stoi(dartResult.substr(index,i-index));
            index = i+1;
        }
        
        if(dartResult[i]=='D') now=now*now;
        else if(dartResult[i]=='T') now=now*now*now;
        
        //옵션 존재
        if(i+1<dartResult.length() && (dartResult[i+1]=='*'||dartResult[i+1]=='#')){
            if(dartResult[i+1]=='*'){
                answer+=before;
                now*=2;
            }
            else{
                now*=(-1);
            }
            
            index++;
        }
        
        i++;
    }
    
    
    answer+=now;
    return answer;
}
