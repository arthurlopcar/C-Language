#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*4-Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo.
Se a presta��o for maior que 20% do sal�rio imprima:
�Empr�stimo n�o concedido�, caso contr�rio imprima:
�Empr�stimo concedido�*/
int main(){
setlocale(LC_ALL,"");
float salario, prestacaoEmprestimo;

printf("Qual o sal�rio do trabalhador?\n");
scanf("%f", &salario);

prestacaoEmprestimo = 600;

if(prestacaoEmprestimo > 0.20 * salario){
    printf("Empr�stimo n�o concedido.\n");
}
else
    printf("Empr�stimo concedido.\n");
return 0;
}
