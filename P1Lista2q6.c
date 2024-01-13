#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*6 - Escreva um programa que leia um número inteiro maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251
corresponder ao valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o
programa terminara com a mensagem “Número inválido”. */
int main(){
setlocale(LC_ALL,"");

int i, soma;

printf("Digite um número inteiro maior que zero, por favor:\n");
scanf("%d", &i);

if (i !=0){
    while(i !=0){
        soma += i%10;
        i/=10;
    }
    printf("A soma dos seus algarismos será:\n%d", soma);
    }
    else printf("Número inválido.\n");
return 0;
}
