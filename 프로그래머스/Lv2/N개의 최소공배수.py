import math

def solution(arr):
    answer = arr[0]
    
    for i in arr:
        answer=int(i*answer/math.gcd(i,answer))
    
    return answer
