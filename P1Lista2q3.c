#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*3 - Faça um programa que receba um número inteiro
e verifique se este número é par ou ímpar.*/
int main(){
setlocale(LC_ALL,"");

int numIndeciso, numPar, numImpar;

printf("Digite um número, por favor:\n");
scanf("%d", &numIndeciso);

if (numIndeciso %2 == 0){
    printf("O número escolhido é par.\n");
}
else
    printf("O número escolhido é ímpar.\n");
return 0;
}
