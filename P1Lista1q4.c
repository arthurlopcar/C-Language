#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*4- Leia um número real e imprima
    o resultado do quadrado desse número.*/
int main (){
setlocale (LC_ALL, "");

float i = 55.55;
float quadrado = i * i;
printf("Digite um número real:\n");
scanf("%.4f", &i);
printf("O quadrado do número digitado é \n%.2f", quadrado);
return 0;
}
