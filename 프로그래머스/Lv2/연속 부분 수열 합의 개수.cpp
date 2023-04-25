#include <string>
#include <vector>
#include <map>

using namespace std;

//길이가 1~배열길이까지 수열이 존재할 수 있음
//길이가 n인 수열일때 인덱스 0~0+n-1까지 돌면서 합 구하기 (인덱스 초과 방지를 위해 % 사용하기)
//합을 key로 가지는 map 사용 -> size 판별을 통해 최종 답 

int solution(vector<int> elements) {
    int answer = 0;
    int len=elements.size();
    int nowLen=1;
    map<int,int> m;
    
    while(nowLen<len){
        
        for(int i=0;i<len;i++){
            int temp=0;
            for(int j=i;j<i+nowLen;j++){
                int Index=j%len;
                temp+=elements[Index];
            }
            m[temp]++;
        }
        nowLen++;
        
    }
    int temp=0;
    for(int i=0;i<len;i++){
            temp+=elements[i];
            
    }
    m[temp]++;
    
    answer=m.size();
    
    return answer;
}
