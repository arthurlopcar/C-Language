#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorResultado[20];
    int i, j = 0;

    // Leitura dos números no primeiro vetor
    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos números no segundo vetor
    printf("\nDigite 10 números inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Preenchimento do vetor resultado
    for (i = 0; i < 10; i++) {
        vetorResultado[j++] = vetor1[i]; // Posições pares com valores do primeiro vetor
        vetorResultado[j++] = vetor2[i]; // Posições ímpares com valores do segundo vetor
    }

    // Exibição do vetor resultado
    printf("\nVetor Resultado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
