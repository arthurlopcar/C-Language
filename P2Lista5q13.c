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

    // Leitura dos n�meros no vetor
    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Verifica��o dos n�meros primos e suas posi��es
    printf("\nN�meros primos e suas posi��es no vetor:\n");
    for (i = 0; i < 10; i++) {
        if (isPrime(numeros[i])) {
            printf("N�mero %d � primo e est� na posi��o %d.\n", numeros[i], i);
        }
    }

    return 0;
}
