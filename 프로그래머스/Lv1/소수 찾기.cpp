#include <bits/stdc++.h>

using namespace std;

int prime[1000001];

int isPrime(int num){
    
    int count=0;
    
    fill(prime,prime+num+1,1);
    for(int i=2; i<sqrt(num)+1;i++){
        if(prime[i]==0) continue;
        for(int j=i+i;j<=num;j+=i){
            prime[j]=0;
        }
    }
    
    for(int i=2;i<=num;i++){
        if(prime[i]){
            count++;
        }
    }
    
    return count;
}

int solution(int n) {
    int answer = 0;
    
    answer=isPrime(n);
    
    return answer;
}
