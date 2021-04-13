N = int(input())
arr = list(map(int, input().split()))
dp = [1] * N

for i in range(N):
    for j in range(i + 1, N):
        if arr[i] > arr[j]:
            dp[j] = max(dp[j], dp[i] + 1)

print(len(arr) - max(dp))