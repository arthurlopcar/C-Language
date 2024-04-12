#include <stdio.h>

#define TAMANHO 10

int main() {
    double vetorOriginal[TAMANHO];
    double vetorQuadrado[TAMANHO];
    int i;

    // Lendo os valores do vetor original
    printf("Digite 10 valores reais:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%lf", &vetorOriginal[i]);
    }

    // Calculando o quadrado e armazenando no vetorQuadrado
    for (i = 0; i < TAMANHO; i++) {
        vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
    }

    // Imprimindo o vetor original
    printf("Vetor original: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2lf ", vetorOriginal[i]);
    }
    printf("\n");

    // Imprimindo o vetor com os quadrados
    printf("Vetor com quadrados: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2lf ", vetorQuadrado[i]);
    }
    printf("\n");

    return 0;
}
