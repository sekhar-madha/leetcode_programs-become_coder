n=int(input())
for i in range(n):
    v=int(input())
    l=input().split()
    dic={}
    for i in l:
        if i not in dic:
            dic[i]=1
        else:
            dic[i]+=1
    l=dic.items()
    l=sorted(l,key=lambda x:(x[1]),reverse=True)
    e=[l[i][0] for i in range(len(l)) if l[i][1]==l[0][1]]
    e.sort()
    print(e[0])
