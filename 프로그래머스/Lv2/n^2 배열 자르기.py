def solution(n, left, right):
    answer = []
    row_left=left//n+1
    row_right=right//n+1
    Index=n*(row_left-1)
    
    for i in range(row_left,row_right+1):
        for j in range(0,i):
            if(Index>=left and Index<=right): answer.append(i)
            Index+=1
        for j in range(i,n): 
            if(Index>=left and Index<=right): answer.append(j+1)
            Index+=1
            
    return answer
