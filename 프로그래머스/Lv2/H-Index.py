def solution(citations):
    answer = 0
    citations.sort()
    Size=len(citations)
    
    for i in range(1,Size+1):
        for j in range(Size):
            if(citations[j]>=i): #h번 이상 인용된 논문일때
                if(Size-j>=i and j<=i):
                    answer=i
    
    return answer
