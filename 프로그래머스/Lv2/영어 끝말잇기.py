def solution(n, words):
    answer = [0,0]
    s={words[0]}
    last=words[0][-1]
    
    for i in range(1,len(words)):
        if(words[i][0]!=last or (words[i] in s)):
            
            i+=1
            cycle = int(i/n) #몇바퀴
            if(i%n==0): answer=[n,cycle]
            else: answer=[i-n*cycle,cycle+1]
                
            break
        else:
            s.add(words[i])
            last=words[i][-1]

    return answer
