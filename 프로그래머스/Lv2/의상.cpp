#include <string>
#include <vector>
#include <map>

using namespace std;

int count=0;

void dfs(bool check,map<string,int> m, vector <string> v,int index,int value){
    
    if(index>=v.size()-1){
        if(check) value*=m[v[index]];
        count+=value;
        return;
    }
    if(check) value*=m[v[index]];
    
    dfs(true, m,v, index+1,value);
    dfs(false, m,v, index+1,value);
}

int solution(vector<vector<string>> clothes) {
    map < string,int > m;
    vector< string > v;
    vector< bool > check;
    int answer = 0;
    count=0;
    
    for(int i=0;i<clothes.size();i++){
        string categ = clothes[i][1];
        string clothe = clothes[i][0];
        if(m.find(categ)==m.end()){ //존재하지 않는 key
            m.insert({categ,1});
            v.push_back(categ);
        }else{ //존재하는 key
            m[categ]+=1;
        }
    }
     
    if(m.size() == 30){ return 1073741823; }
    else{
        dfs(true,m,v,0,1);
        dfs(false,m,v,0,1);
    }
    
    
    //아무것도 착용하지 않는 조합 1개 빼기
    return count-1;
}
