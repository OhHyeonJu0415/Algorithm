def solution(n):
    answer = 0
    arr=[1,2]
    
    for i in range(2,n):
        arr.append((arr[i-1]%1234567+arr[i-2]%1234567)%1234567)
    
    answer=arr[n-1]
    return answer
