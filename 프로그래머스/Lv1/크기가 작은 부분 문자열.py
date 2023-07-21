def solution(t, p):
    answer = 0
    Size=len(p)
    
    for i in range(0,len(t)-Size+1):
        num=t[i:i+Size]
        if(int(num)<=int(p)): answer+=1
    
    return answer
