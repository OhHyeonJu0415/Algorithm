def solution(s):
    zero=0
    count=0
    
    while(s!='1'):
        arr=list(s)
        zero+=arr.count('0')
        count+=1
        if(arr.count('0')!=0): arr=[i for i in arr if i not in {'0'}]
        s=bin(len(arr))[2:]
    
    return [count,zero]
