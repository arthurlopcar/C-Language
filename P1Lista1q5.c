#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*5-Leia um n�mero real e imprima
    a quinta parte deste n�mero*/
int main(){
setlocale(LC_ALL, "");

float numero;
float quintaParte;

numero = 12.34;
printf("Escreva um n�mero real:\n");
scanf("%.3f", &numero);
quintaParte = numero / 5;
printf("\nO resultado da quinta parte do n�mero digitado �: \n%.3f\n", quintaParte);
return 0;
}
