N = int(input())
A = list(map(int, input().split()))
ans = 0
for i in range(2, 2 * N):
    if A[i - 2] == A[i]:
        ans += 1
print(ans)
