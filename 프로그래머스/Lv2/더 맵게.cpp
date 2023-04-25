#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>,greater<int>> q;
    for(int i=0;i<scoville.size();i++){
        q.push(scoville[i]);
    }
    cout << q.size()<<endl;
    while(q.top()<K && !q.empty()){
        if(q.size()==1) break;
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        q.push(a+b*2);
        answer++;
    }
    if(q.empty() || q.top()<K) return -1;
    return answer;
}
