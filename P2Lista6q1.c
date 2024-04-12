#include <stdio.h>

int main() {
    char input_string[100]; // Declara um array para armazenar a string

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", input_string);

    // Imprime a string fornecida pelo usuário
    printf("A string que você digitou é: %s\n", input_string);

    return 0;
}
