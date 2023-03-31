n = int(input())
a = list(map(int, input().split()))

if a == sorted(a):
    print(-1)

else:
    for i in range(n-1, 0, -1):
        if a[i-1] > a[i]:
            break
    for j in range(n-1, 0, -1):
        if a[i-1] > a[j]:
            a[i-1], a[j] = a[j], a[i-1]
            break
    a[i:] = a[i:][::-1]
    print(*a)