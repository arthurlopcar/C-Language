#include <stdio.h>

int main() {
    int numeros[10];
    int numerosImpares[10];
    int i, j = 0;

    // Leitura dos números no vetor
    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    for (i = 0; i < 10; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &numeros[i]);
        } while (numeros[i] < 0 || numeros[i] > 50);
    }

    // Preenchimento do segundo vetor com os números ímpares
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            numerosImpares[j] = numeros[i];
            j++;
        }
    }

    // Impressão dos dois vetores, dois elementos por linha
    printf("\nVetor 1: ");
    for (i = 0; i < 10; i++) {
        printf("%d", numeros[i]);
        if (i < 9) {
            printf(", ");
        }
    }

    printf("\nVetor 2 (Apenas ímpares): ");
    for (i = 0; i < j; i++) {
        printf("%d", numerosImpares[i]);
        if (i < j - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
