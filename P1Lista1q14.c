#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*14-Leia o valor do raio de um c�rculo
e calcule e imprima a �rea do c�rculo correspondente.*/
int main(){
setlocale(LC_ALL,"");

int raio;
float area, PI;

printf("Qual � o valor do raio do c�rculo:\n");
scanf("%d", &raio);

PI = 3.141592;
area = (PI * (pow(raio, 2)));

printf("Agora, com o valor do raio, a �rea do c�rculo �:\n%.2f", area);

return 0;
}
