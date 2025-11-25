a = int(input())

print("Matriks A")
A = []
for i in range(a):
    baris = list(map(int, input().split()))
    A.append(baris)

print("Matriks B")
B = []
for i in range(a):
    baris = list(map(int, input().split()))
    B.append(baris)

print("Matriks AXB")
C = [[0] * a for _ in range(a)]

for i in range(a):
    for j in range(a):
        for k in range(a):
            C[i][j] += A[i][k] * B[k][j]

for i in range(a):
    for j in range(a):
        print(C[i][j], end=" ")
    print()