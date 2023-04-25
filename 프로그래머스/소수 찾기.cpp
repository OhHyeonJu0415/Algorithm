#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

//소수 판별 알고리즘
bool prime(int n){
    if(n<2) return false; //2미만은 소수가 아니다
    
    for(int i=2; i <= sqrt(n); i++){ //나누는 횟수를 반으로 줄이기
        if(n%i==0){ //나누어 떨어지면 소수가 아니다
            return false;
        }
    }
    
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector <int> v;
    bool arr[10000000]={false};
    fill(arr,arr+10000000,false);
    for(int i=0;i<numbers.size();i++){
        v.push_back(numbers[i]-'0');
    }
    
    sort(v.begin(),v.end());
    
    do{
        string temp="";
        for(int i=0;i<v.size();i++){
            temp+=to_string(v[i]);
        }
        
        for(int i=1;i<v.size()+1;i++){
            string str=temp.substr(0,i);
            
            if(prime(stoi(str))){ //소수라면?
                
                
                //중복체크
                if(!arr[stoi(str)]){
                    cout << stoi(str) <<endl;
                    arr[stoi(str)]=true;
                    answer++;
                }
            }
        }
    }while(next_permutation(v.begin(),v.end()));
    return answer;
}
