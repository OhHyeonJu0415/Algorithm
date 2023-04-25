#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(),people.end());
    if(people[0]>limit/2) return people.size();
    
    int temp=0;
    int Index=people.size()-1;
    while(temp<Index){
        
        if(people[temp]+people[Index]>limit){ //몸무게가 젤 큰 사람만 보내기
            Index--;
            answer++;
        }else{ //젤 큰 사람, 젤 작은 사람 동시에 보내기
            answer++;
            Index--;
            temp++;
        }
        if(temp==Index) answer++;
        
    }
    
    return answer;
}
