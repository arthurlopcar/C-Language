#include <stdio.h>

int calcularSomaAbaixoDiagonal(int matriz[3][3]) {
    int soma = 0;

    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < i; j++) {
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

    int somaAbaixoDiagonal = calcularSomaAbaixoDiagonal(matriz);
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", somaAbaixoDiagonal);

    return 0;
}
