#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> split(string a, char de){
    vector <int> answer;
    stringstream ss(a);
    string temp;
    
    while(getline(ss,temp,de)){
        answer.push_back(stoi(temp));
    }
    sort(answer.begin(),answer.end());
    return answer;
}

string solution(string s) {
    string answer = "";
    
    vector<int> ret = split(s,' ');
    
    answer+=to_string(ret.front());
    answer+=" ";
    answer+=to_string(ret.back());
    
    return answer;
}
