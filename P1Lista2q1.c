#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*1-Fa�a um programa que receba dois n�meros
    e mostre qual deles � o maior*/
int main(){
setlocale(LC_ALL,"");
int x, y;
printf("Digite um valor de um n�mero, por favor:\n");
scanf("%d", &x);
printf("Agora, digite outro valor de outro n�mero:\n");
scanf("%d", &y);

if(x < y){
    printf("O n�mero %d � menor que o %d.", x, y);
}
if (x > y){
    printf("O n�mero %d � maior que o %d.", x, y);
}
return 0;
}
