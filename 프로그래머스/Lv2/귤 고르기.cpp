#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//각 크기마다 개수 저장할 배열 -> 정렬 후 개수 많은 순으로 살펴보기

bool cmp(int a, int b){
    return a>b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int arr[10000001];
    fill(arr,arr+10000001,0);
    
    for(int i=0;i<tangerine.size();i++){
        arr[tangerine[i]]++;
    }
    
    sort(arr,arr+10000001,cmp);
    int Index=0;
    
    while(k>0){
        k-=arr[Index++];
        answer++;
    }
    
    return answer;
}
