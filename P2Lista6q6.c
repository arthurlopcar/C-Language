#include <stdio.h>
#include <ctype.h> // Biblioteca para usar a fun��o tolower()

int main() {
    char nome[100];

    // Solicita ao usu�rio para inserir um nome
    printf("Digite um nome: ");
    scanf("%s", nome);

    // Verifica se a primeira letra do nome � "a" (mai�scula ou min�scula)
    if (nome[0] == 'a' || nome[0] == 'A') {
        // Imprime o nome somente se a primeira letra for "a" ou "A"
        printf("Nome: %s\n", nome);
    } else {
        printf("A primeira letra do nome n�o � 'a' ou 'A'.\n");
    }

    return 0;
}
