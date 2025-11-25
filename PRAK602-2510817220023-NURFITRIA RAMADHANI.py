batas = int(input())
a = list(map(int, input().split()))

for i in range(batas):
    a[i] = a[i] * (i + 1)

for i in range(batas):
    print(a[i], end=" ")