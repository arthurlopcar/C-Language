#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*1-Faça um programa que receba dois números
    e mostre qual deles é o maior*/
int main(){
setlocale(LC_ALL,"");
int x, y;
printf("Digite um valor de um número, por favor:\n");
scanf("%d", &x);
printf("Agora, digite outro valor de outro número:\n");
scanf("%d", &y);

if(x < y){
    printf("O número %d é menor que o %d.", x, y);
}
if (x > y){
    printf("O número %d é maior que o %d.", x, y);
}
return 0;
}
