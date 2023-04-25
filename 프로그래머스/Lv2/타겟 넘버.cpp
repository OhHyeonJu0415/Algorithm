#include <string>
#include <vector>

using namespace std;
int count=0;

void dfs(int Index, vector<int> numbers,int target,int total){
    if(Index>=numbers.size()){
        if(total==target) count++;
        return;
    }
    dfs(Index+1,numbers, target, total+numbers[Index]); 
    dfs(Index+1,numbers, target, total-numbers[Index]);
}

int solution(vector<int> numbers, int target) {
    count=0;
    dfs(0,numbers,target,0);
    return count;
}

