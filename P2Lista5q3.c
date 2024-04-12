#include <stdio.h>

#define TAMANHO 8

int main() {
    int vetor[TAMANHO];
    int x, y;

    // Lendo os valores do vetor
    printf("Digite %d valores inteiros para o vetor:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lendo os valores de X e Y
    printf("Digite os valores de X e Y (entre 0 e %d): ", TAMANHO - 1);
    scanf("%d %d", &x, &y);

    // Verificando se X e Y são valores válidos
    if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO) {
        // Calculando a soma dos valores nas posições X e Y
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("Valores de X e/ou Y inválidos. Certifique-se de que estão entre 0 e %d.\n", TAMANHO - 1);
    }

    return 0;
}
