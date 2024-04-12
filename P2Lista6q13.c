#include <stdio.h>

int main() {
    char nome_mercadoria[100];
    float valor_total, valor_desconto, valor_vista;

    // Solicita ao usuário para inserir o nome da mercadoria e o valor total
    printf("Digite o nome da mercadoria: ");
    scanf("%s", nome_mercadoria);

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valor_total);

    // Calcula o valor do desconto (10% do valor total)
    valor_desconto = 0.10 * valor_total;

    // Calcula o valor a ser pago à vista (valor total - valor do desconto)
    // Imprime os resultados
    printf("Nome da mercadoria: %s\n", nome_mercadoria);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);

    return 0;
}
