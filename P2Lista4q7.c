#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int contarPrimosAbaixoDeN(int N) {
    int count = 0;

    for (int i = 2; i < N; i++) {
        if (ehPrimo(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;

    printf("Digite um n�mero inteiro positivo N: ");
    scanf("%d", &N);

    if (N > 0) {
        int quantidadePrimos = contarPrimosAbaixoDeN(N);
        printf("Quantidade de n�meros primos abaixo de %d �: %d\n", N, quantidadePrimos);
    } else {
        printf("O n�mero deve ser inteiro positivo.\n");
    }

    return 0;
}
