n = int(input())
a = list(map(int, input().split()))

dp = [1001] * (n + 1)
dp[n - 1] = 0

for i in range(n - 2, -1, -1):
    for j in range(i + a[i], i, -1):
        if j >= n:
            continue
        dp[i] = min(dp[j] + 1, dp[i])

if (dp[0]) == 1001:
    print(-1)
else :
    print(dp[0])