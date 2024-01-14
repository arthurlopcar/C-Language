#include <stdio.h>

long long calcularFatorial(int n) {
    long long fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int n;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O n�mero deve ser inteiro positivo.\n");
        return 1;
    }

    long long resultado = calcularFatorial(n);

    printf("%d! = %lld\n", n, resultado);

    return 0;
}
