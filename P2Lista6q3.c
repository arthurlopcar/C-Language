#include <stdio.h>

int compararStrings(const char *str1, const char *str2) {
    int i = 0;

    // Percorre as strings enquanto os caracteres não forem diferentes ou ambos forem diferentes de '\0'
    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    // Retorna o resultado da comparação dos caracteres
    if (str1[i] < str2[i]) {
        return -1;
    } else if (str1[i] > str2[i]) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char string1[100];
    char string2[100];

    // Solicita ao usuário para inserir duas strings
    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Compara as duas strings e imprime o resultado
    int resultado = compararStrings(string1, string2);

    if (resultado == 0) {
        printf("As duas strings são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira string é menor que a segunda.\n");
    } else {
        printf("A primeira string é maior que a segunda.\n");
    }

    return 0;
}
