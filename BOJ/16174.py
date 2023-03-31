import queue

def is_valid(x, y):
    return 0 <= x < N and 0 <= y < N

N = int(input())
maps = [list(map(int, input().split())) for _ in range(N)]
visited = [[False] * N for _ in range(N)]

q = queue.Queue()
q.put((0, 0))

while q.empty() == False:
    x, y = q.get()
    cur = maps[x][y]

    if visited[x][y] == True:
        continue

    visited[x][y] = True

    if x == N - 1 and y == N - 1:
        print("HaruHaru")
        exit()
        break

    if cur == 0:
        continue

    for dx, dy in [(0, cur), (cur, 0)]:
        nx, ny = x + dx, y + dy
        if is_valid(nx, ny):
            q.put((nx, ny))

print("Hing")