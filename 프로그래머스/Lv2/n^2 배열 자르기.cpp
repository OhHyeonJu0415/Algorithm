#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// 1 2 3 4
// 2 2 3 "4"
// 3 3 3 4
// 4 4 "4" 4

//(2,4) -> (4,3)

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int leftRow=0, rightRow=0;
    int leftCol=0, rightCol=0;
    long long temp=0;
    
    //left, right가 속한 행
    leftRow = left/n+1;
    rightRow = right/n+1;
    
    //행의 시작은 n*0, n*1, n*2, ... n*(n-1)
    //행의 끝은 n*1-1, n*2-1,...n*n-1
    
    //left, right가 속한 열
    leftCol= n-((n*leftRow-1)-left);
    rightCol= n-((n*rightRow-1)-right);
    
    
    for(int i=leftRow;i<=rightRow;i++){
        for(int j=1;j<=n;j++){
            if(j<leftCol && i==leftRow) continue;
            answer.push_back(max(i,j));
            if(i==rightRow && j == rightCol) break;
        }
    }
    
    
    
    return answer;
}
