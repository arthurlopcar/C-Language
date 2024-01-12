#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*20- Receba o salário-base de um funcionário. Calcule e imprima o salário a receber,
sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base.
Além disso, ele paga 7% de imposto sobre o salário-base*/
int main(){
setlocale(LC_ALL,"");

float salarioBase, salarioReceber, gratificacao, imposto;

printf("Qual é o salário-base do funcionário do mês?\n");
scanf("%f", &salarioBase);

imposto = salarioBase * 0.93;

printf("\nSó que, como todo brasileiro, ele também paga imposto, então o salário dele é\n%.2f\n", imposto);

gratificacao = imposto * 1.05;


printf("\nPorém, ele recebe uma gratificação mensal devido ao seu esforço, por isso seu novo salário mensal é\n%.2f\n", gratificacao);

return 0;
}
