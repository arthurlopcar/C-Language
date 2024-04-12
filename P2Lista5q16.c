#include <stdio.h>

int main() {
    int vetor[15];
    int tamanhoVetor = 15;

    // Leitura dos números no vetor
    printf("Digite 15 números inteiros:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    // Compactação do vetor (eliminando os valores zero)
    int j = 0;
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] != 0) {
            vetor[j] = vetor[i];
            j++;
        }
    }

    // Preenchimento das posições restantes com zero
    while (j < tamanhoVetor) {
        vetor[j] = 0;
        j++;
    }

    // Exibição do vetor compactado
    printf("\nVetor compactado:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
