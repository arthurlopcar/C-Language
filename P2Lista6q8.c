#include <stdio.h>
#include <string.h>
#include <ctype.h> // Biblioteca para usar a função tolower()

int ehVogal(char c) {
    // Converte o caractere para minúscula para facilitar a comparação
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char string[100];
    char nova_string[100];
    int j = 0;

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string: ");
    scanf("%s", string);

    int tamanho = strlen(string);

    // Copia a string para uma nova string, removendo as vogais
    for (int i = 0; i < tamanho; i++) {
        if (!ehVogal(string[i])) {
            nova_string[j] = string[i];
            j++;
        }
    }

    // Adiciona o caractere nulo no final da nova string
    nova_string[j] = '\0';

    // Imprime a nova string sem as vogais
    printf("String sem vogais: %s\n", nova_string);

    return 0;
}
