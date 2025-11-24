#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int A[20][20], B[20][20], C[20][20];

    printf("Matriks A\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matriks AXB\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            C[i][j] = 0;
            for (int k = 0; k < a; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}