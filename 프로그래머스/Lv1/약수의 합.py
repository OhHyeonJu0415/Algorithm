def solution(n):
    if(n==0):
        return 0
    
    answer = 1
    
    for i in range(2,n+1):
        if(n%i==0):
            answer+=i
    
    return answer
