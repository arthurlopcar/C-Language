#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*8 - A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o
intervalo de 0 at� 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o
semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece
aos pesos: Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9), de
recupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verifica��es necess�rias*/
int main(){
setlocale(LC_ALL,"");

int prova;
float P1, P2, P3, media, notaFinal;

printf("Qual a nota do trabalho de laborat�rio?\n");
scanf("%f", &P1);
printf("Qual a nota da avalia��o semestral?\n");
scanf("%f", &P2);
printf("Qual a nota do exame final?\n");
scanf("%f", &P3);

media = (P1 * 2 + P2 * 3 + P3 * 5);
notaFinal = media / 10;

printf("A nota final do aluno ser�\n%.2f\n\n", notaFinal);

switch(prova){
    case 'P1':
        0 < notaFinal <= 2.9;
        printf("Aluno reprovado.\n\n");
    break;
    case 'P2':
        3 < notaFinal <= 4.9;
         printf("Aluno de recupera��o.\n\n");
    break;
    default:
        printf("Aluno APAVORADO!\n\n");
}
/*if (0 < notaFinal <= 2.9){
    printf("Aluno reprovado.\n\n");
}
else
    if (3 < notaFinal <= 4.9){
    printf("Aluno de recupera��o.\n\n");
}
if (notaFinal > 5){
    printf("Aluno APAVORADO!\n\n");
}*/
return 0;
}
