#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n) {
    long long answer = 1;
    long long DP[2001];
    fill(DP, DP+2001, 0);
    
    DP[1]=1;
    DP[2]=2;
    
    for(int i=3;i<=n;i++){
        DP[i]=(DP[i-1]%1234567+DP[i-2]%1234567)%1234567;
    }
    
    answer=DP[n];
    
    return answer;
}
