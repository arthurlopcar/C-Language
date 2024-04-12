#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a fun��o tolower()

int main() {
    char string[100];

    // Solicita ao usu�rio para inserir uma string
    printf("Digite uma string em letras mai�sculas: ");
    scanf("%s", string);

    // Converte cada caractere da string para min�sculo, se for uma letra mai�scula
    int i = 0;
    while (string[i] != '\0') {
        string[i] = tolower(string[i]);
        i++;
    }

    // Imprime a string convertida para min�sculo
    printf("String em letras min�sculas: %s\n", string);

    return 0;
}
