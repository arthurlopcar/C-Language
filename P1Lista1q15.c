#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*15-Leia o sal�rio de um funcion�rio.
Calcule e imprima o valor do novo sal�rio,
sabendo que ele recebeu um aumento de 25%.*/
int main(){
setlocale(LC_ALL,"");

float salario, novoSalario;

printf("Qual o sal�rio do funcion�rio antes da promo��o:\n");
scanf("%f", &salario);

novoSalario = 1.25 * salario;

printf("O sal�rio do funcion�rio ap�s a promo��o ser�:\n%.2f", novoSalario);

return 0;
}
