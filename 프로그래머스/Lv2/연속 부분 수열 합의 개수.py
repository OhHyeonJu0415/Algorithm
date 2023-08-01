def solution(elements):
    s={sum(elements)}
    arr=elements
    for i in range(len(elements)):
        temp=0
        for j in range(len(elements)-1):
            temp+=arr[j]
            s.add(temp)
        arr=arr[1:]
        arr.append(elements[i])
    
    return len(s)
