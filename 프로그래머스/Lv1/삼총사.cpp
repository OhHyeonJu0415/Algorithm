#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int sum=0;
    int Size=number.size();
    
    vector<int> v(Size,false);
    fill(v.end()-3,v.end(),true);
    
    do{
        sum=0;
        for(int i=0;i<Size;i++){
            if(v[i]) sum+=number[i];
        }
        if(sum==0) answer++;
        
    }while(next_permutation(v.begin(),v.end()));
    
    
    return answer;
}
