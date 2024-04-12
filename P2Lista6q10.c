#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a função tolower()

int main() {
    char string[100];

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string em letras maiúsculas: ");
    scanf("%s", string);

    // Converte cada caractere da string para minúsculo, se for uma letra maiúscula
    int i = 0;
    while (string[i] != '\0') {
        string[i] = tolower(string[i]);
        i++;
    }

    // Imprime a string convertida para minúsculo
    printf("String em letras minúsculas: %s\n", string);

    return 0;
}
