#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answerA = 0, answerB=0;

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int len=A.size();
    
    for(int i=0;i<len;i++){
        //A의 최솟값, B의 최댓값
        answerA+=A[i]*B[len-1-i];
        
        //A의 최댓값, B의 최솟값
        answerB+=B[i]*A[len-1-i];
    }
    

    return min(answerA, answerB);
}
