#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    int minY=60,minX=60,maxY=-1,maxX=-1;
    
    for(int i=0;i<wallpaper.size();i++){
        for(int j=0;j<wallpaper[i].length();j++){
            if(wallpaper[i][j]=='#'){
                if(i<minY) minY=i;
                if(j<minX) minX=j;
                if(i>maxY) maxY=i;
                if(j>maxX) maxX=j;
            }
        }
    }
    
    answer.push_back(minY);
    answer.push_back(minX);
    answer.push_back(maxY+1);
    answer.push_back(maxX+1);
    
    
    return answer;
}
