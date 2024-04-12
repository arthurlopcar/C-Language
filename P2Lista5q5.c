#include <stdio.h>

int main() {
    int valores[6];
    int i;

    // Leitura dos valores
    printf("Digite 6 valores inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Exibição dos valores na ordem inversa
    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
