def solution(triangle):
    answer = 0
    arr=[]
    Size=len(triangle)
    
    for i in range(Size-1):
        temp=[]
        for j in range(i+1):
            temp.append(-1)
        arr.append(temp)
                   
    arr.append(triangle[Size-1])
    
    for i in range(Size-2,-1,-1):
        for j in range(0,i+1):
            arr[i][j]=max(arr[i+1][j],arr[i+1][j+1])+triangle[i][j]
    
    answer=arr[0][0]
    return answer
