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

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N > 0) {
        int quantidadePrimos = contarPrimosAbaixoDeN(N);
        printf("Quantidade de números primos abaixo de %d é: %d\n", N, quantidadePrimos);
    } else {
        printf("O número deve ser inteiro positivo.\n");
    }

    return 0;
}
