#include <stdio.h>

int comprimentoString(const char *str) {
    int length = 0;

    // Percorre a string at� encontrar o caractere nulo ('\0')
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char input_string[100]; // Declara um array para armazenar a string

    // Solicita ao usu�rio para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", input_string);

    // Calcula o comprimento da string fornecida pelo usu�rio e imprime o resultado
    int length = comprimentoString(input_string);
    printf("O comprimento da string �: %d\n", length);

    return 0;
}
