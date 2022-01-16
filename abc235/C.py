n,q = map(int,input().split())
A = list(map(int,input().split()))

dic = {}
for i in range(len(A)):
    dic.setdefault(str(A[i]),[]).append(i+1)

for i in range(q):
    x, k = map(int,input().split())
    k -= 1
    l = dic[str(x)]
    if(l < len())
    print(l[k])
