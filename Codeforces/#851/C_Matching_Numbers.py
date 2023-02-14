t = int(input())

while t > 0:
    n = int(input())

    if n % 2 == 0:
        print("No")
        t = t - 1
        continue
    else:
        print("Yes")

    k = n // 2 + 1
    tmp = (1 + 2 * n) - (n // 2)
    tmp = tmp - 1

    for i in range(1, k + 1):
        print(i, tmp)
        tmp = tmp + 1

    tmp = (1 + 2 * n) - (n // 2) - 1
    tmp = tmp - k + 1
    for i in range(k + 1, n + 1):
        print(i, tmp)
        tmp = tmp + 1

    t = t - 1

# TODO: Add tags here