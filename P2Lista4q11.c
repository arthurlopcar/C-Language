#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, float nota4) {
    float media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    return media;
}

int main() {
    float nota1, nota2, nota3, nota4;

    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    float media = calcularMedia(nota1, nota2, nota3, nota4);

    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
