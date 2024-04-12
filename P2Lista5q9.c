#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], vetorC[10];
    int i;

    // Leitura dos números no vetor A
    printf("Digite 10 números inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Leitura dos números no vetor B
    printf("\nDigite 10 números inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Cálculo do vetor C (C = A - B)
    for (i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    // Exibição dos dados do vetor C
    printf("\nDados do vetor C (C = A - B):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
