
N,K = map(int,input().split())
P = []
for i in range(N):
    p = list(map(int,input().split()))
    summation = sum(p)
    P.append(summation)

sortedP = sorted(P,reverse=True)
threshold = sortedP[K-1]

for i in range(N):
    if P[i]+300 >= threshold:
        print("Yes")
    else :
        print("No")
