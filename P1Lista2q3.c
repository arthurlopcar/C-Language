#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*3 - Fa�a um programa que receba um n�mero inteiro
e verifique se este n�mero � par ou �mpar.*/
int main(){
setlocale(LC_ALL,"");

int numIndeciso, numPar, numImpar;

printf("Digite um n�mero, por favor:\n");
scanf("%d", &numIndeciso);

if (numIndeciso %2 == 0){
    printf("O n�mero escolhido � par.\n");
}
else
    printf("O n�mero escolhido � �mpar.\n");
return 0;
}
