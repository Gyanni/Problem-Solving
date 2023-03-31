# BOJ 17259 - 선물이 넘쳐흘러

B, N, M = map(int, input().split())
p = []

present = [0] * (3 * B)

for _ in range(N):
    x, y, t = map(int, input().split())
    p.append((x, y, t))

for _ in range(1, M):
    for i in range(3 * B):
        present[i] = present[i - 1]
    present[0] = 1

    for x, y, t in p: