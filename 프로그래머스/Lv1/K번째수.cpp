#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    int start=0,end=0,k=0;
    for(int i=0;i<commands.size();i++){
        start=commands.at(i).at(0);
        end=commands.at(i).at(1);
        k=commands.at(i).at(2);
        
        //array에서 해당 길이만큼 자르기
        for(int j=start-1;j<end;j++){
            temp.push_back(array[j]);
        }
        
        //정렬하기
        sort(temp.begin(),temp.end());
        
        //k번째 수 찾아서 answer에 넣기
        answer.push_back(temp[k-1]);
        
        //초기화
        temp.clear();
    }
        
    return answer;
}
