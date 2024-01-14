#include <stdio.h>

int main() {
    int n, somatorio = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número deve ser inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        somatorio += i;
    }

    printf("O somatório de 1 até %d é: %d\n", n, somatorio);

    return 0;
}
