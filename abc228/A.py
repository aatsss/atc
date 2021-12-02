

l = list(map(int,input().split()))
l[2] =l[2] + (1/2)

if (l[0] > l[1]):
    l[1] = l[1]+24
    if (l[2] < l[0]):
        l[2] = l[2]+24

if (l[0] <= l[2] and l[2] <= l[1]):
    print("Yes")
else :
    print("No")


