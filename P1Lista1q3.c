#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*3- Fa�a um programa que leia
    um n�mero real e o imprima.*/
int main(){
setlocale(LC_ALL,"");
float b = 22.75;
printf("Digite um n�mero real:\n");
scanf("%.2f", &b);
printf("O n�mero real digitado foi \n%.2f\n", b);
scanf("%.2f", &b);
return 0;
}
