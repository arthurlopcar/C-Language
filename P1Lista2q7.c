#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*7 - Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A
primeira e a segunda prova t�m peso 1 e a terceira tem peso 2. Ao final, mostrar a
m�dia do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para
aprova��o deve ser igual ou superior a 60 pontos.*/
int main (){
setlocale(LC_ALL, "");

 float prova1, prova2, prova3, media;

    printf("Qual foi a nota da primeira prova?\n");
    scanf("%f", &prova1);
    printf("Qual foi a nota da segunda prova?\n");
    scanf("%f", &prova2);
    printf("Por fim, qual a nota da terceira prova?\n");
    scanf("%f", &prova3);



    media = ((prova1 + prova2 + prova3 *2)/4);
    printf("A m�dia do aluno foi:\n%.2f\n", media);

if(media >= 60){
    printf("Aluno APAVORADO!\n");
} else {
    printf("Aluno REPROVADO!\n");
}
    return 0;
}
