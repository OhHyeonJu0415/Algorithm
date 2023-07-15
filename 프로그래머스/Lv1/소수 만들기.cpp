#include <bits/stdc++.h>
using namespace std;

int arr[3001];

void isPrime(){
    fill(arr,arr+3001,1);
    for(int i=2;i<sqrt(3000)+1;i++){
        if(arr[i]==0) continue;
        
        for(int j=i+i;j<=3000;j+=i){
            arr[j]=0;
        }
    }
}

int solution(vector<int> nums) {
    int answer = 0;
    isPrime();
    int sum=0;

    vector<bool> v(nums.size());
    fill(v.end()-3,v.end(),true);
    
    do{
        
        sum=0;
        for(int i=0;i<nums.size();i++){
            if(v[i]) sum+=nums[i];
        }
        
        if(arr[sum]){
            answer++;
        }
        
    }while(next_permutation(v.begin(),v.end()));
    
    
    return answer;
}
