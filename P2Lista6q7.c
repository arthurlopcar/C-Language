#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    // Solicita ao usu�rio para inserir uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    // Imprime a palavra de tr�s-pra-frente
    printf("Palavra de tr�s-pra-frente: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
