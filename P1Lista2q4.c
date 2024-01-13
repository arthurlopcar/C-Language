#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*4-Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação for maior que 20% do salário imprima:
“Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/
int main(){
setlocale(LC_ALL,"");
float salario, prestacaoEmprestimo;

printf("Qual o salário do trabalhador?\n");
scanf("%f", &salario);

prestacaoEmprestimo = 600;

if(prestacaoEmprestimo > 0.20 * salario){
    printf("Empréstimo não concedido.\n");
}
else
    printf("Empréstimo concedido.\n");
return 0;
}
