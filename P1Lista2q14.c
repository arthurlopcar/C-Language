#include <stdio.h>
#include <stdlib.h>
/*14 - Faça um programa que leia três números inteiros positivos
e efetue o cálculo de uma das seguintes médias de acordo com um valor
numérico digitado pelo usuário*/
int main(){

int num1, num2, num3;
float mediaGeom, mediaPond, mediaHarm, mediaArit;

printf("Digite tres numeros inteiros positivos:\n");
scanf("%d", &num1, num2, num3);

mediaGeom = sqrt((num1 * num2 * num3));
mediaPond = (num1 + (2 * num2) + (3 * num3)) / 6;
mediaHarm = (1 / (1 / num1 + 1 / num2 + 1 / num3));
mediaArit = (num1 + num2 + num3) / 3;


?


return 0;
}
