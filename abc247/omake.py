memo = {}
# メモ化再帰

def f(n):
    if n in memo:
        return memo[n]
    if n <= 1:
        memo[n] = n
        return n
    else:
        memo[n] = f(n - 1) + f(n - 2)
        return f(n - 1) + f(n - 2)


# def f(n):　                                       これじゃ終わらない
#   return n if n <= 1 else f(n - 1) + f(n - 2)

print(f(70))
