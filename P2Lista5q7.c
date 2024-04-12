#include <stdio.h>

int main() {
    int numeros[10];
    int x;
    int quantidadeMultiplos = 0;
    int i;

    // Leitura dos n�meros no vetor
    printf("Digite 10 n�meros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Leitura do n�mero x
    printf("\nDigite um n�mero inteiro x: ");
    scanf("%d", &x);

    // Contagem e exibi��o dos m�ltiplos de x no vetor
    printf("\nM�ltiplos de %d no vetor:\n", x);
    for (i = 0; i < 10; i++) {
        if (numeros[i] % x == 0) {
            printf("%d\n", numeros[i]);
            quantidadeMultiplos++;
        }
    }

    // Exibi��o da quantidade de m�ltiplos encontrados
    printf("\nQuantidade de m�ltiplos: %d\n", quantidadeMultiplos);

    return 0;
}
