#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 2- Faça um programa que leia
    um número inteiro e o imprima*/
int main(){
setlocale(LC_ALL, "");
int a = 12;
printf("Por favor, digite um número inteiro:\n");
scanf("%d", &a);
printf("O número inteiro digitado foi\n%d", a);
return 0;
}
