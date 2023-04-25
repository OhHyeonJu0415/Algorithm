#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int xMax=0,yMax=0,w=0,h=0;
    for(int i=0; i<sizes.size();i++){
        w=sizes.at(i).at(0);
        h=sizes.at(i).at(1);
        if(w>=h){
            if(xMax<w) xMax=w;
            if(yMax<h) yMax=h;
        }else{
            if(xMax<h) xMax=h;
            if(yMax<w) yMax=w;
        }
    }
    answer=xMax*yMax;
    return answer;
}
