#include <stdio.h>

long long calcularPotencia(int X, int Z) {
    long long resultado = 1;

    for (int i = 0; i < Z; i++) {
        resultado *= X;
    }

    return resultado;
}

int main() {
    int X, Z;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Z: ");
    scanf("%d", &Z);

    long long resultado = calcularPotencia(X, Z);

    printf("%d elevado a %d é: %lld\n", X, Z, resultado);

    return 0;
}
