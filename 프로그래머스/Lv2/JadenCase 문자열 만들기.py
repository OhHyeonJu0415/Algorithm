def solution(s):
    answer = []
    arr=s.split(" ")
    for str in arr:
        if(str): 
            answer.append(str[0].upper() + str[1:].lower())
        else:
            answer.append(str)
    return " ".join(answer)
