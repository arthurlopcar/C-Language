#include <stdio.h>

int main() {
    int valores[6];
    int i;

    // Lendo os valores
    printf("Digite 6 valores inteiros:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    // Mostrando os valores lidos
    printf("Os valores digitados foram: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", valores[i]);
    }

    printf("\n");

    return 0;
}
