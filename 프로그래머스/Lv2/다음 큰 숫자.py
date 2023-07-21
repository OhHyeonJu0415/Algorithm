def solution(n):
    answer = 0
    arr=list(bin(n))
    
    for i in range(n+1,1000001):
        newArr=list(bin(i))
        if(arr.count('1')==newArr.count('1')):
            answer=int(''.join(newArr),2)
            break
    
    
    return answer
