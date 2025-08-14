N, T = map(int, input().split())

s = 0
for i in range(N):
    _, x = input().split()
    s += int(x)

print(s / T)
