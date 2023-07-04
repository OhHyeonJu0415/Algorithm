#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min=0;
    int count=0,index=0;
    
    sort(lottos.begin(),lottos.end());
    sort(win_nums.begin(),win_nums.end());
    
    for(int i=0;i<lottos.size();i++){
        if(lottos[i]==0) count++;
    }
    
    for(int i=0;i<win_nums.size();i++){
        for(int j=index;j<lottos.size();j++){
            if(win_nums[i]==lottos[j]){
                index=j;
                 min++;
            }
            
        }
    }
    
    if(6-(min+count)+1>=6) answer.push_back(6);
    else answer.push_back(6-(min+count)+1);
    
    if(6-min+1>=6) answer.push_back(6);
    else answer.push_back(6-min+1);
    
    
    return answer;
}
