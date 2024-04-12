#include <stdio.h>

void bubbleSort(float vetor[], int tamanho) {
    int i, j;
    float temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos de posição se o elemento atual for maior que o próximo
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float vetor[10];

    // Leitura dos números no vetor
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    // Ordenação do vetor usando o Bubble Sort
    bubbleSort(vetor, 10);

    // Exibição do vetor ordenado
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
