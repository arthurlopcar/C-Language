#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*6-Pe�a ao usu�rio para digitar
    tr�s valores inteiros e imprima a soma deles.*/
int main(){
setlocale(LC_ALL,"");

int valor1, valor2, valor3;
int soma;

printf("Primeiramente, digite um valor inteiro:\n", valor1);
scanf("%d", &valor1);
printf("Digite outro valor inteiro, por favor:\n", valor2);
scanf("%d", &valor2);
printf("Para concluir, digite um terceiro valor inteiro:\n", valor3);
scanf("%d", &valor3);
soma = valor1 + valor2 + valor3;
printf("O valor da soma dos tr�s valores �:\n%d", soma);
return 0;
}
