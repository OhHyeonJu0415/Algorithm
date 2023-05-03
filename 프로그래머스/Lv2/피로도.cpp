#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    sort(dungeons.begin(),dungeons.end());
    while(next_permutation(dungeons.begin(),dungeons.end())){
        int now=k; //현재 내 체력
        int count=0;
        for(int i=dungeons.size()-1;i>=0;i--){
            if(dungeons[i][0]>now) break;
            else{
                now-=dungeons[i][1];
                count++;
            }
        }
        if(count>answer) answer=count;
        
    }
    
    
    return answer;
}
