#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*10-Faça um programa que receba os valores de a e b,
e calcule o valor da hipotenusa através da equação.
    Imprima o resultado dessa operação.*/

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

printf("O valor da hipotenusa do triângulo é:\n%.2f", hipotenusa);
return 0;
}
