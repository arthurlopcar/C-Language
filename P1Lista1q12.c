#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*12-Faça a leitura de três valores
    e apresente como resultado a soma dos
    quadrados dos três valores lidos*/
int main(){
setlocale(LC_ALL,"");

int num1, num2, num3, soma;
printf("Digite um valor aleatório, para se fazer a soma:\n");
scanf("%d", &num1);
printf("Digite outro valor, por favor:\n");
scanf("%d", &num2);
printf("Pra finalizar, um teceiro valor:\n");
scanf("%d", &num3);
soma = (pow(num1, 2) + pow(num2, 2) + pow(num3, 2));
printf("A soma resultante do quadrado dos três valores citados é \n%d\n", soma);
return 0;
}
