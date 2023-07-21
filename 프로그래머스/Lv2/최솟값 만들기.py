def solution(A,B):
#     answer = 0
#     A.sort()
#     B.sort()
#     B.reverse()
    
#     for i in range(len(A)):
#         answer+=A[i]*B[i]

#     return answer

    return sum([a*b for a,b in zip(sorted(A),sorted(B, reverse=True))])
