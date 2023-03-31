from queue import PriorityQueue

n, h, k = map(int, input().split())

height = PriorityQueue()
for i in range(n):
    tmp = int(input())
    height.put(-tmp)

cnt = 0

for j in range(k):
    tmp = -height.get()

    if tmp == 1:
        height.put(-1)
    elif tmp < h:
        height.put(-tmp)
        break
    else:
        height.put(-(tmp // 2))
        cnt += 1


nn = -height.get()
if nn >= h:
    print("NO")
    print(nn)
else:
    print("YES")
    print(cnt)
