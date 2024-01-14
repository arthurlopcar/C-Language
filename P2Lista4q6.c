#include <stdio.h>

int somaInteirosEntreNumeros(int num1, int num2) {
    int menor = (num1 < num2) ? num1 : num2;
    int maior = (num1 > num2) ? num1 : num2;

    int soma = 0;
    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int num1, num2;

    printf("Digite dois n�meros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0 && num2 > 0) {
        int resultado = somaInteirosEntreNumeros(num1, num2);
        printf("A soma dos n�meros inteiros existentes entre %d e %d �: %d\n", num1, num2, resultado);
    } else {
        printf("Ambos os n�meros devem ser inteiros positivos.\n");
    }

    return 0;
}
