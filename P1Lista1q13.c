#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*13-Leia um número inteiro e imprima
a soma do sucessor de seu triplo com o
    antecessor de seu dobro.*/
int main(){
setlocale(LC_ALL,"");

int i, somaDoida;
printf("Digite um valor inteiro qualquer, por favor:\n");
scanf("%d", &i);

somaDoida  = (3*i + i) + (2 * i - i);

printf("O resultado da soma soma do sucessor de seu triplo \ncom o antecessor de seu dobro será:\n%d", somaDoida);
return 0;
}
