#include <stdio.h>

void bubbleSort(float vetor[], int tamanho) {
    int i, j;
    float temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos de posi��o se o elemento atual for maior que o pr�ximo
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float vetor[10];

    // Leitura dos n�meros no vetor
    printf("Digite 10 n�meros reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    // Ordena��o do vetor usando o Bubble Sort
    bubbleSort(vetor, 10);

    // Exibi��o do vetor ordenado
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
