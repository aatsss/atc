"""
浮動小数点の計算はpowを使うよりも i**n > n などの判定を使ってあげた方が正確にできる．
"""

N = int(input())

ans = 0 
for i in range(1,N+1):
    if i**3 > N:
        break
    for j in range(i,N+1):
        if i*j**2 > N:
            break
        ans += N//i//j -j + 1
    
print(ans)