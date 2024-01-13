#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*8 - A nota final de um estudante é calculada a partir de três notas atribuídas entre o
intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação
semestral e a um exame final. A média das três notas mencionadas anteriormente obedece
aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias*/
int main(){
setlocale(LC_ALL,"");

int prova;
float P1, P2, P3, media, notaFinal;

printf("Qual a nota do trabalho de laboratório?\n");
scanf("%f", &P1);
printf("Qual a nota da avaliação semestral?\n");
scanf("%f", &P2);
printf("Qual a nota do exame final?\n");
scanf("%f", &P3);

media = (P1 * 2 + P2 * 3 + P3 * 5);
notaFinal = media / 10;

printf("A nota final do aluno será\n%.2f\n\n", notaFinal);

switch(prova){
    case 'P1':
        0 < notaFinal <= 2.9;
        printf("Aluno reprovado.\n\n");
    break;
    case 'P2':
        3 < notaFinal <= 4.9;
         printf("Aluno de recuperação.\n\n");
    break;
    default:
        printf("Aluno APAVORADO!\n\n");
}
/*if (0 < notaFinal <= 2.9){
    printf("Aluno reprovado.\n\n");
}
else
    if (3 < notaFinal <= 4.9){
    printf("Aluno de recuperação.\n\n");
}
if (notaFinal > 5){
    printf("Aluno APAVORADO!\n\n");
}*/
return 0;
}
