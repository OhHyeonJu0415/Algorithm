def solution(n):
    answer = 1
    
    for i in range(1,int(n/2)+1):
        sum=0
        for j in range(i,n):
            sum+=j
            if(sum>=n):
                if(sum==n): answer+=1
                break
            
    
    return answer
