N, M = map(int, input().split())
A = [int(i) for i in input().split()]
dp = [0] * N
inf = float("inf")
for i in range(1, N):
    if i == 1:
        dp[i] = A[i]
    else:
        min = inf
        for j in range(1, M + 1):
            if i - j < 0: break
            time = dp[i - j] + A[i] * j
            if time < min:
                min = time
        dp[i] = min
# print(dp)
print(dp.pop())
