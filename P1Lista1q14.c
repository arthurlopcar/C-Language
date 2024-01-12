#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*14-Leia o valor do raio de um círculo
e calcule e imprima a área do círculo correspondente.*/
int main(){
setlocale(LC_ALL,"");

int raio;
float area, PI;

printf("Qual é o valor do raio do círculo:\n");
scanf("%d", &raio);

PI = 3.141592;
area = (PI * (pow(raio, 2)));

printf("Agora, com o valor do raio, a área do círculo é:\n%.2f", area);

return 0;
}
