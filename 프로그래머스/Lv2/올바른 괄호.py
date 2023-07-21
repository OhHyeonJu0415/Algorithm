def solution(s):
    answer = True
    arr=list(s[0])
    
    for str in s[1:]:
        
        if(len(arr)==0): arr.append(str)
        elif(str=='('): arr.append(str)
        elif(str==')' and arr[-1]=='('): arr.pop()
        
    return len(arr)==0
