#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool check =false;
    int len=arr.size();
    sort(arr.begin(),arr.end());
    
    for(int i=1;;i++){
        check=false;
        answer=i*arr[len-1];
        for(int j=len-2;j>=0;j--){
            if(answer%arr[j]!=0){
                check=false;
                break;
            }else{
                check=true;
            }
        }
        if(check) break;
    }
    
    
    return answer;
}
