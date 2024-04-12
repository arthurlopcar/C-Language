#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a função tolower()

int main() {
    char nome[100];

    // Solicita ao usuário para inserir um nome
    printf("Digite um nome: ");
    scanf("%s", nome);

    // Verifica se a primeira letra do nome é "a" (maiúscula ou minúscula)
    if (nome[0] == 'a' || nome[0] == 'A') {
        // Imprime o nome somente se a primeira letra for "a" ou "A"
        printf("Nome: %s\n", nome);
    } else {
        printf("A primeira letra do nome não é 'a' ou 'A'.\n");
    }

    return 0;
}
