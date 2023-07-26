def solution(k, tangerine):
    answer = 0
    d={}
    
    for i in tangerine:
        if i in d:
            d[i]=d[i]+1
        else:
            d[i]=1
    
    newD=dict(sorted(d.items(), key=lambda x: x[1], reverse=True))
    
    for i in newD:
        k-=newD[i]
        answer+=1
        if(k<=0): break
    
    return answer
