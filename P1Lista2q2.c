#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*2 - Leia um número fornecido pelo usuário.
Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/
int main(){
setlocale(LC_ALL,"");

int num, raizQuadrada;

printf("Digite um número qualquer, por favor:\n");
scanf("%d", &num);

if(num > 0){

raizQuadrada = sqrt(num);

printf("A raiz quadrada do número digitado é\n%d\n", raizQuadrada);

}
if(num < 0){
    printf("O número é inválido.\n");
}
return 0;
}
