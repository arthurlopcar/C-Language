#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 2- Fa�a um programa que leia
    um n�mero inteiro e o imprima*/
int main(){
setlocale(LC_ALL, "");
int a = 12;
printf("Por favor, digite um n�mero inteiro:\n");
scanf("%d", &a);
printf("O n�mero inteiro digitado foi\n%d", a);
return 0;
}
