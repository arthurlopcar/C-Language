#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*7-Leia uma temperatura em graus Celsius
    e apresente-a convertida em graus Fahrenheit.*/
int main(){
setlocale(LC_ALL,"");

float grausCelsius, grausFahrenheit;

printf("Qual a temperatura em graus Celsius?\n");
scanf("%f", &grausCelsius);
grausFahrenheit = grausCelsius * (9.0/5.0) + 32.0;
printf("Então, o valor da conversão em graus Fahrenheit é:\n%.2f\n", grausFahrenheit);
return 0;
}
