#include <stdio.h>
#include <stdlib.h>
/*11-Faça um programa para verificar se um
determinado número inteiro é divisível por 3 ou 5,
mas não simultaneamente pelos dois.*/
int main()
{
int num;

printf("Digite um numero inteiro: \n");
scanf("%d\n", &num);

if (num % 3 == 0)
    printf("Este numero eh divisivel por 3\n");
else if(num%5==0)
    printf("Este numero eh divisivel por 5\n");
else
    printf("Este numero nao eh divisivel nem por 3 nem por 5\n");

return 0;
}
