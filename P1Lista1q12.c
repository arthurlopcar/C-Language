#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*12-Fa�a a leitura de tr�s valores
    e apresente como resultado a soma dos
    quadrados dos tr�s valores lidos*/
int main(){
setlocale(LC_ALL,"");

int num1, num2, num3, soma;
printf("Digite um valor aleat�rio, para se fazer a soma:\n");
scanf("%d", &num1);
printf("Digite outro valor, por favor:\n");
scanf("%d", &num2);
printf("Pra finalizar, um teceiro valor:\n");
scanf("%d", &num3);
soma = (pow(num1, 2) + pow(num2, 2) + pow(num3, 2));
printf("A soma resultante do quadrado dos tr�s valores citados � \n%d\n", soma);
return 0;
}
