import collections

def check(s):
    while(True):
        if("()" in s): s=s.replace("()","")
        elif("{}" in s): s=s.replace("{}","")
        elif("[]" in s): s=s.replace("[]","")
        else: return False if s else True

def solution(s):
    answer = 0
    
    q = collections.deque(s)
    
    for i in range(len(s)):
        if(check(''.join(q))): answer+=1
        q.rotate(-1)
    
    return answer
