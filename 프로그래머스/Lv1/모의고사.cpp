#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int count1=0,count2=0,count3=0;
    int index1=0,index2=0,index3=0;
    int person1[5]={1,2,3,4,5};
    int person2[8]={2,1,2,3,2,4,2,5};
    int person3[10]={3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0;i<answers.size();i++){
        if(i%5==0) index1=0;
        if(i%8==0) index2=0;
        if(i%10==0) index3=0;
        if(answers[i]==person1[index1]) count1++;
        if(answers[i]==person2[index2]) count2++;
        if(answers[i]==person3[index3]) count3++;
        index1++, index2++, index3++;
    }
    int temp=max({count1,count2,count3});
    if(temp==count1) answer.push_back(1);
     if(temp==count2) answer.push_back(2);
     if(temp==count3) answer.push_back(3);
    
    return answer;
}
