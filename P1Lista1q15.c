#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*15-Leia o salário de um funcionário.
Calcule e imprima o valor do novo salário,
sabendo que ele recebeu um aumento de 25%.*/
int main(){
setlocale(LC_ALL,"");

float salario, novoSalario;

printf("Qual o salário do funcionário antes da promoção:\n");
scanf("%f", &salario);

novoSalario = 1.25 * salario;

printf("O salário do funcionário após a promoção será:\n%.2f", novoSalario);

return 0;
}
