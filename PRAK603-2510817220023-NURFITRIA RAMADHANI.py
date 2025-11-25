a, b = map(int, input().split())

if a != b:
    print("Jumlah tidak sama")
else:
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))

    for i in range(a):
        print(x[i] * y[i], end=" ")