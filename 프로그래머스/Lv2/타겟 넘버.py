def solution(numbers, target):
    l=len(numbers)
    
    def dfs(sum,Index):
        nonlocal answer #중첩함수에서 바깥함수 변수 사용하기
        if(Index==l): 
            if(sum==target): answer+=1
            return
        
        dfs(sum+numbers[Index],Index+1)
        dfs(sum-numbers[Index],Index+1)
    
    answer=0
    dfs(0,0)
    
    return answer
