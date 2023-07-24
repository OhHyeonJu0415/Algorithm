def solution(people, limit):
    answer = 0
    people.sort()
    i=0
    
    while(len(people)>i):
        if(len(people)==1):
            answer+=1
            people.pop()
        elif(people[i]+people[-1]<=limit):
            answer+=1
            people.pop()
            i+=1
        else:
            answer+=1
            people.pop()
            
    return answer
