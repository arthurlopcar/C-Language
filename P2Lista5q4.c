#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i;
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    // Lendo os valores do vetor
    printf("Digite %d valores inteiros para o vetor:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializando as variáveis "maior" e "menor" com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];
    posicaoMaior = 0;
    posicaoMenor = 0;

    // Encontrando o maior e o menor elemento e suas posições
    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    // Imprimindo os resultados
    printf("O maior elemento do vetor é %d e está na posição %d.\n", maior, posicaoMaior);
    printf("O menor elemento do vetor é %d e está na posição %d.\n", menor, posicaoMenor);

    return 0;
}
