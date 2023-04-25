#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int kind=0;
    int arr[200001]={0};
    for(int i=0;i<nums.size();i++){
        if( arr[nums[i]]==0){
            kind+=1;
        }
        arr[nums[i]]+=1;
    }
    
    if(kind<nums.size()/2){
       answer=kind;
    }else{
       answer=nums.size()/2;
    }
    
    return answer;
}
