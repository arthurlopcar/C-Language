#include <stdio.h>

int calcularSomaAcimaDiagonal(int matriz[3][3]) {
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaAcimaDiagonal = calcularSomaAcimaDiagonal(matriz);
    printf("A soma dos elementos acima da diagonal principal é: %d\n", somaAcimaDiagonal);

    return 0;
}
