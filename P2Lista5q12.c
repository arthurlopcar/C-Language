#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1; // Iniciamos com o primeiro n�mero natural
    int count = 0; // Contador de elementos do vetor

    while (count < 100) {
        // Verifica se o n�mero n�o � m�ltiplo de 7 ou se termina com 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[count] = numero;
            count++;
        }
        numero++;
    }

    // Exibi��o do vetor
    printf("Vetor com os 100 primeiros naturais que n�o s�o m�ltiplos de 7 ou terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) { // Quebra de linha a cada 10 elementos
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
