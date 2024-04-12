#include <stdio.h>

int main() {
    int numeroAluno, numeroAlunoMaisAlto, numeroAlunoMaisBaixo;
    float altura, alturaMaisAlto = 0.0, alturaMaisBaixo = 100.0;
    int i;

    for (i = 0; i < 10; i++) {
        // Leitura dos dados do aluno
        printf("Digite o n�mero do aluno: ");
        scanf("%d", &numeroAluno);

        printf("Digite a altura do aluno (em metros): ");
        scanf("%f", &altura);

        // Verifica se a altura � a mais alta
        if (altura > alturaMaisAlto) {
            alturaMaisAlto = altura;
            numeroAlunoMaisAlto = numeroAluno;
        }

        // Verifica se a altura � a mais baixa
        if (altura < alturaMaisBaixo) {
            alturaMaisBaixo = altura;
            numeroAlunoMaisBaixo = numeroAluno;
        }
    }

    // Exibi��o dos resultados
    printf("\nAluno mais alto:\n");
    printf("N�mero do aluno: %d\n", numeroAlunoMaisAlto);
    printf("Altura: %.2f metros\n", alturaMaisAlto);

    printf("\nAluno mais baixo:\n");
    printf("N�mero do aluno: %d\n", numeroAlunoMaisBaixo);
    printf("Altura: %.2f metros\n", alturaMaisBaixo);

    return 0;
}
