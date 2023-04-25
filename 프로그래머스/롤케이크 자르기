#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

//앞에서부터 1조각, 2조각,... n-1조각 잘랐을때 각 종류 수 저장한 map
//뒤에서부터 n-1조각, n-2조각,...,1조각 잘랐을때 종류 수 저장한 map

int solution(vector<int> topping) {
    int answer = 0;

    map<int,int> front;
    map<int,int> back;

    vector<int> vFront;
    vector<int> vBack;

    for(int i=0;i<topping.size()-1;i++){
        front[topping[i]]++;
        vFront.push_back(front.size());
    }

    for(int i=topping.size()-1;i>0;i--){
        back[topping[i]]++;
        vBack.push_back(back.size());
    }

    reverse(vBack.begin(),vBack.end());

    for(int i=0;i<vFront.size();i++){
        if(vFront[i]==vBack[i]) answer++;
    }


    return answer;
}
