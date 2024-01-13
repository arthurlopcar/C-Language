#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*6 - Escreva um programa que leia um n�mero inteiro maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao n�mero 251
corresponder ao valor 8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero, o
programa terminara com a mensagem �N�mero inv�lido�. */
int main(){
setlocale(LC_ALL,"");

int i, soma;

printf("Digite um n�mero inteiro maior que zero, por favor:\n");
scanf("%d", &i);

if (i !=0){
    while(i !=0){
        soma += i%10;
        i/=10;
    }
    printf("A soma dos seus algarismos ser�:\n%d", soma);
    }
    else printf("N�mero inv�lido.\n");
return 0;
}
