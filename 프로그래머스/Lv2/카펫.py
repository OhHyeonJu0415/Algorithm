def solution(brown, yellow):
    answer = []
    area=brown+yellow
    
    for i in range(2,int(brown/2)): #가로 길이
        for j in range(1,i+1): #세로 길이
            if(i*j==area and (area-2*i-2*(j-2))==yellow):
                return [i,j]
    
    return answer
