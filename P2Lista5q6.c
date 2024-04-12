#include <stdio.h>

int main() {
    float numeros[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;
    int i;

    // Leitura dos n�meros reais
    printf("Digite 10 n�meros reais:\n");
    for (i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // C�lculo da quantidade de n�meros negativos e soma dos positivos
    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    // Exibi��o dos resultados
    printf("\nQuantidade de n�meros negativos: %d\n", quantidadeNegativos);
    printf("Soma dos n�meros positivos: %.2f\n", somaPositivos);

    return 0;
}
