#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*10-Fa�a um programa que receba os valores de a e b,
e calcule o valor da hipotenusa atrav�s da equa��o.
    Imprima o resultado dessa opera��o.*/

int main(){
setlocale(LC_ALL,"");

int a, catetoOposto, b, catetoAdjacente;
float hipotenusa, h;

a = catetoOposto;
b = catetoAdjacente;
h = hipotenusa;

printf("Digite o valor do cateto oposto, por favor:\n");
scanf("%d", &a);
printf("Agora, digite o valor do cateto adjacente:\n");
scanf("%d",&b);

hipotenusa = sqrt(pow(a, 2)+pow(b, 2));

printf("O valor da hipotenusa do tri�ngulo �:\n%.2f", hipotenusa);
return 0;
}
