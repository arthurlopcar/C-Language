#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*2 - Leia um n�mero fornecido pelo usu�rio.
Se esse n�mero for positivo, calcule a raiz quadrada do n�mero.
Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.*/
int main(){
setlocale(LC_ALL,"");

int num, raizQuadrada;

printf("Digite um n�mero qualquer, por favor:\n");
scanf("%d", &num);

if(num > 0){

raizQuadrada = sqrt(num);

printf("A raiz quadrada do n�mero digitado �\n%d\n", raizQuadrada);

}
if(num < 0){
    printf("O n�mero � inv�lido.\n");
}
return 0;
}
