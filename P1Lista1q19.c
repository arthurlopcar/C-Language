#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*19-Escreva um programa que leia as coordenadas x e y
de pontos no plano R2 e calcule sua dist�ncia da origem (0,0).*/
int main(){
setlocale(LC_ALL,"");

float x, y, distancia;

printf("Digite as coordenadas x e y do ponto:\n");
printf("x = ");
scanf("%f", &x);
printf("y = ");
scanf("%f", &y);

distancia = sqrt(pow(x, 2) + pow(y,2));

printf("A dist�ncia do ponto(%.0f,%.0f) at� a origem (0,0) � %.2f\n", x, y, distancia);

return 0;
}
