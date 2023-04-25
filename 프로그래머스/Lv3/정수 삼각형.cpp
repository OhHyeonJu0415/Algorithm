#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> v;
    v.resize(triangle.size());
    int Index=0;
    v[0].push_back(triangle[0][0]);
    for(int i=1;i<triangle.size();i++){
        v[i].resize(triangle[i].size());
        for(int j=0;j<triangle[i].size();j++){
            
            if(j==0){
                v[i][j]=v[i-1][j]+triangle[i][j];
            }else if(j==triangle[i].size()-1){
                v[i][j]=v[i-1][j-1]+triangle[i][j];
            }else{
                v[i][j]=max(v[i-1][j-1],v[i-1][j])+triangle[i][j];
            }
            
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(v[v.size()-1][i]>answer) answer=v[v.size()-1][i];
    }
    
    return answer;
}
