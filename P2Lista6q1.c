#include <stdio.h>

int main() {
    char input_string[100]; // Declara um array para armazenar a string

    // Solicita ao usu�rio para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", input_string);

    // Imprime a string fornecida pelo usu�rio
    printf("A string que voc� digitou �: %s\n", input_string);

    return 0;
}
