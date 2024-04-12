#include <stdio.h>

// Fun��o para verificar se um elemento est� presente no vetor
int estaNoVetor(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // Retorna 1 se o elemento estiver presente no vetor
        }
    }
    return 0; // Retorna 0 se o elemento n�o estiver presente no vetor
}

int main() {
    int vetor1[10], vetor2[10], vetorIntersecao[10];
    int tamanhoIntersecao = 0;

    // Leitura dos elementos no primeiro vetor
    printf("Digite 10 n�meros inteiros para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos elementos no segundo vetor
    printf("\nDigite 10 n�meros inteiros para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Encontrando a interse��o entre os vetores
    for (int i = 0; i < 10; i++) {
        if (estaNoVetor(vetor2, 10, vetor1[i]) && !estaNoVetor(vetorIntersecao, tamanhoIntersecao, vetor1[i])) {
            vetorIntersecao[tamanhoIntersecao] = vetor1[i];
            tamanhoIntersecao++;
        }
    }

    // Exibi��o do vetor de interse��o
    printf("\nVetor de Interse��o:\n");
    for (int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", vetorIntersecao[i]);
    }
    printf("\n");

    return 0;
}
