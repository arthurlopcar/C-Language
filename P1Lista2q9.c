#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*9 - Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o
dia da semana correspondente a este n�mero. Isto e, domingo se 1, segunda-feira
se 2, e assim por diante.*/
int main(){
setlocale(LC_ALL,"");

int num;

printf("Digite um n�mero entre 1 e 7, por favor:\n");
scanf("%d", &num);

switch (num){
    case 1:
        printf("Domingo\n");
    break;
    case 2:
        printf("Segunda\n");
    break;
    case 3:
        printf("Ter�a\n");
    break;
    case 4:
        printf("Quarta\n");
    break;
    case 5:
        printf("Quinta\n");
    break;
    case 6:
        printf("Sexta\n");
    break;
    case 7:
        printf("S�bado\n");
    break;
    default:
        printf("N�mero inv�lido\n");
    break;
}
return 0;
}
