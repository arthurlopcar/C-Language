#include <stdio.h>

int contarUns(const char *str) {
    int count = 0;
    int i = 0;

    // Percorre a string e verifica cada caractere
    while (str[i] != '\0') {
        if (str[i] == '1') {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char input_string[100];

    // Solicita ao usu�rio para inserir uma string
    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", input_string);

    // Conta o n�mero de ocorr�ncias do caractere '1' na string fornecida e imprime o resultado
    int ones_count = contarUns(input_string);
    printf("O n�mero de '1's na string �: %d\n", ones_count);

    return 0;
}
