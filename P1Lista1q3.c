#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*3- Faça um programa que leia
    um número real e o imprima.*/
int main(){
setlocale(LC_ALL,"");
float b = 22.75;
printf("Digite um número real:\n");
scanf("%.2f", &b);
printf("O número real digitado foi \n%.2f\n", b);
scanf("%.2f", &b);
return 0;
}
