a, b = map(int, input().split())
c = []

for i in range(a):
    c.extend(input().split())

for i in range(a):
    for j in range(b):
        print(c[i*b + j], end=" ")
    print()