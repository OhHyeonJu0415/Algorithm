#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2,0);
    map<string,int> m;
    int Index=1;
    m[words[0]]++;
    int people=1;
    int tern=1;
    
    while(Index<words.size()){
        people++;
        people=people%n;
        m[words[Index]]++;
        if(m[words[Index]]>=2 || words[Index-1].back()!=words[Index].front()){
            if(people==0) people=n;
            answer.front()=people;
            answer.back()=tern;
            break;
        }
        
        Index++;
        if(Index%n==0) tern++;
    }

    return answer;
}
