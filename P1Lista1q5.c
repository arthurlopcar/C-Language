#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*5-Leia um número real e imprima
    a quinta parte deste número*/
int main(){
setlocale(LC_ALL, "");

float numero;
float quintaParte;

numero = 12.34;
printf("Escreva um número real:\n");
scanf("%.3f", &numero);
quintaParte = numero / 5;
printf("\nO resultado da quinta parte do número digitado é: \n%.3f\n", quintaParte);
return 0;
}
