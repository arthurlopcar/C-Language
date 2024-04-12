#include <stdio.h>

int main() {
    float numeros[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;
    int i;

    // Leitura dos números reais
    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Cálculo da quantidade de números negativos e soma dos positivos
    for (i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    // Exibição dos resultados
    printf("\nQuantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
