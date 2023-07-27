import heapq

def solution(operations):
    answer = []
    d={}
    max_heap=[]
    min_heap=[]
    
    for str in operations:
        command=str[0]
        num=int(str[2:])
        
        if(command=='I'):
            if num in d: d[num]= d[num]+1
            else: d[num]=1
            heapq.heappush(max_heap,num*(-1))
            heapq.heappush(min_heap,num)
        else:
            if(len(max_heap)==0 or len(min_heap)==0):
                max_heap=[]
                min_heap=[]
                continue
            if(num==1):
                while(len(max_heap)>0):
                    q_num=heapq.heappop(max_heap)*(-1)
                    if(q_num in d and d[q_num]<=0): continue
                    if(q_num in d ): d[q_num]-=1
                    break
            else:
               while(len(min_heap)>0):
                    q_num=heapq.heappop(min_heap)
                    if(q_num in d and d[q_num]<=0): continue
                    if(q_num in d ): d[q_num]-=1
                    break 
            
    
    while(len(min_heap)>0):
        q_num=heapq.heappop(min_heap)
        if(q_num in d and d[q_num]<=0): continue
        if(q_num in d): answer.append(q_num)
        break 
        
    while(len(max_heap)>0):
        q_num=heapq.heappop(max_heap)*(-1)
        if(q_num in d and d[q_num]<=0): continue
        if(q_num in d): answer.append(q_num)
        break 
    
    if(len(answer)==0): answer=[0,0]
    return sorted(answer, reverse=True)
