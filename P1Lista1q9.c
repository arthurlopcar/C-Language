#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*9-Leia um �ngulo em graus e
    apresente-o convertido em radianos.*/
int main(){
setlocale(LC_ALL,"");

float anguloGrau, anguloRad, PI;
printf("Apresente um valor em graus, por favor:\n");

scanf("%f", &anguloGrau);
PI = 3.14;
anguloRad = anguloGrau * (PI/180);

printf("O �ngulo acima em radianos �:\n%.2f\n", anguloRad);
return 0;
}
