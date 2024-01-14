#include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int resultado = dobro(num);
    printf("O dobro de %d eh: %d\n", num, resultado);

    return 0;
}
