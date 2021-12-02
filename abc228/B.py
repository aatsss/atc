N,X = map(int,input().split())

A = list(map(int,input().split()))
visited = [False for i in range(N)]

cnt = 0
while(not visited[X-1]):
    visited[X-1] = True
    X = A[X-1]
    cnt += 1

print(cnt)