#include <stdio.h>

int main() {
    int numeros[10];
    int x;
    int quantidadeMultiplos = 0;
    int i;

    // Leitura dos números no vetor
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Leitura do número x
    printf("\nDigite um número inteiro x: ");
    scanf("%d", &x);

    // Contagem e exibição dos múltiplos de x no vetor
    printf("\nMúltiplos de %d no vetor:\n", x);
    for (i = 0; i < 10; i++) {
        if (numeros[i] % x == 0) {
            printf("%d\n", numeros[i]);
            quantidadeMultiplos++;
        }
    }

    // Exibição da quantidade de múltiplos encontrados
    printf("\nQuantidade de múltiplos: %d\n", quantidadeMultiplos);

    return 0;
}
