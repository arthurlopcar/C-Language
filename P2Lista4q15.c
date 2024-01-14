#include <stdio.h>

int calcularSomaDiagonalSecundaria(int matriz[3][3]) {
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        soma += matriz[i][2 - i];
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

    int somaDiagonalSecundaria = calcularSomaDiagonalSecundaria(matriz);
    printf("A soma dos elementos da diagonal secundária é: %d\n", somaDiagonalSecundaria);

    return 0;
}
