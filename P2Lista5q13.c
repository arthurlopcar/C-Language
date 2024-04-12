#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numeros[10];
    int i;

    // Leitura dos números no vetor
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Verificação dos números primos e suas posições
    printf("\nNúmeros primos e suas posições no vetor:\n");
    for (i = 0; i < 10; i++) {
        if (isPrime(numeros[i])) {
            printf("Número %d é primo e está na posição %d.\n", numeros[i], i);
        }
    }

    return 0;
}
