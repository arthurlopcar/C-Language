#include <stdio.h>

void substituirCaractere(char *str, char antigo, char novo) {
    int i = 0;

    // Percorre a string e substitui cada ocorrência do caractere antigo pelo novo
    while (str[i] != '\0') {
        if (str[i] == antigo) {
            str[i] = novo;
        }
        i++;
    }
}

int main() {
    char input_string[100];
    char caractere_antigo, caractere_novo;

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", input_string);

    // Solicita ao usuário para inserir os caracteres a serem substituídos
    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &caractere_antigo);

    printf("Digite o caractere novo: ");
    scanf(" %c", &caractere_novo);

    // Substitui as ocorrências do caractere antigo pelo novo na string fornecida
    substituirCaractere(input_string, caractere_antigo, caractere_novo);

    // Imprime a string com as substituições feitas
    printf("String após a substituição: %s\n", input_string);

    return 0;
}
