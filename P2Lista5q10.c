#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorResultado[20];
    int i, j = 0;

    // Leitura dos n�meros no primeiro vetor
    printf("Digite 10 n�meros inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos n�meros no segundo vetor
    printf("\nDigite 10 n�meros inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Preenchimento do vetor resultado
    for (i = 0; i < 10; i++) {
        vetorResultado[j++] = vetor1[i]; // Posi��es pares com valores do primeiro vetor
        vetorResultado[j++] = vetor2[i]; // Posi��es �mpares com valores do segundo vetor
    }

    // Exibi��o do vetor resultado
    printf("\nVetor Resultado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetorResultado[i]);
    }
    printf("\n");

    return 0;
}
