#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*20- Receba o sal�rio-base de um funcion�rio. Calcule e imprima o sal�rio a receber,
sabendo-se que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base.
Al�m disso, ele paga 7% de imposto sobre o sal�rio-base*/
int main(){
setlocale(LC_ALL,"");

float salarioBase, salarioReceber, gratificacao, imposto;

printf("Qual � o sal�rio-base do funcion�rio do m�s?\n");
scanf("%f", &salarioBase);

imposto = salarioBase * 0.93;

printf("\nS� que, como todo brasileiro, ele tamb�m paga imposto, ent�o o sal�rio dele �\n%.2f\n", imposto);

gratificacao = imposto * 1.05;


printf("\nPor�m, ele recebe uma gratifica��o mensal devido ao seu esfor�o, por isso seu novo sal�rio mensal �\n%.2f\n", gratificacao);

return 0;
}
