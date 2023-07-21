def solution(n):
    answer = 0
    arr=[0]*100001
    arr[1]=1
    num=2
    
    while(num<=n):
        arr[num]=(arr[num-1]%1234567+arr[num-2]%1234567)%1234567
        num+=1
        
    answer=arr[n]
    return answer

