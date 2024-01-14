#include <stdio.h>

void produtoMatricial(int N, int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Digite a ordem das matrizes quadradas (N): ");
    scanf("%d", &N);

    int A[N][N], B[N][N], C[N][N];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    produtoMatricial(N, A, B, C);

    printf("Resultado do produto matricial (C = A * B):\n");
    imprimirMatriz(N, C);

    return 0;
}
