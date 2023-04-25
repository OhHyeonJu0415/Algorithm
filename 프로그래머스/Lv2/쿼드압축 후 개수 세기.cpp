#include <string>
#include <vector>

using namespace std;

vector<int> answer(2,0);

void dfs(vector<vector<int>> &arr,int y, int x, int len){
    
    if(len==1){
        if(arr[y][x]==0){
            answer[0]++; return;
        }else{
            answer[1]++; return;
        }
    }
    
    int temp0=0;
    int temp1=0;
    int sum=0;
    for(int i=y;i<y+len;i++){
        for(int j=x;j<x+len;j++){
            sum+=arr[i][j];
        }
    }
    
    
    if(sum==0){ answer[0]++; return;}
    else if(sum==len*len) {answer[1]++; return;}
    else{
        len=len/2;
        dfs(arr,y,x,len); //왼쪽 칸
        dfs(arr,y,x+len,len); //오른쪽 칸
        dfs(arr,y+len,x,len); //아래 칸
        dfs(arr,y+len,x+len,len); //오른쪽 아래 칸
        
    }
    
    
}

vector<int> solution(vector<vector<int>> arr) {
    
    dfs(arr,0, 0, arr.size());
    
    return answer;
}
