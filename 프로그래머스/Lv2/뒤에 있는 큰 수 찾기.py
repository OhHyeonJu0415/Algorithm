def solution(numbers):
    answer = [-1]*len(numbers)
    indexQ=[]
    
    for i in range(len(numbers)):
        if(len(indexQ)==0): indexQ.append(i)
        else:
            while(len(indexQ)!=0):
                last=numbers[indexQ[-1]]
                if(last<numbers[i]):
                    answer[indexQ[-1]]=numbers[i]
                    indexQ.pop()
                else:
                    break
            indexQ.append(i)
    
    return answer
