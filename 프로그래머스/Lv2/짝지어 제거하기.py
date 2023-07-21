def solution(s):
    arr=[]
    
    for str in s:
        if(len(arr)==0): arr.append(str)
        elif(arr[-1]==str): arr.pop()
        else: arr.append(str)
    
    return int(len(arr)==0)
