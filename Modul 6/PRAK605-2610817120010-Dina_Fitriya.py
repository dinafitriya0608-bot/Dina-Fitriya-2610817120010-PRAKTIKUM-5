n = int(input())
input()
A = [list(map(int, input().split())) for _ in range(n)]
input()
B = [list(map(int, input().split())) for _ in range(n)]

C = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for line in C:
    print(*line)