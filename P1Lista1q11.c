#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*11-Leia um valor de comprimento em cent�metros
    e apresenta-o convertido em polegadas*/
int main(){
setlocale(LC_ALL,"");

int centimetros;
float polegadas;
printf("Primeiramente, digite um valor em cent�metros:\n");
scanf("%d", &centimetros);
polegadas = centimetros / 2.54;
printf("Agora, o valor em polegadas �: \n%f\n", polegadas);
return 0;
}
