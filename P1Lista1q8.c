#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*8-Leia uma velocidade em km/h
    e apresente-a convertida em m/s.*/
int main(){
setlocale(LC_ALL,"");

float velocidadeK, velocidadeM;
printf("Qual a velocidade em quil�metros por hora?\n");
scanf("%f", &velocidadeK);
velocidadeM = velocidadeK / 3.6;
printf("A convers�o da velocidade para metro por segundo ser�\n%.2f\n", velocidadeM);
return 0;
}
