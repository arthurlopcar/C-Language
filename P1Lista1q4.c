#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*4- Leia um n�mero real e imprima
    o resultado do quadrado desse n�mero.*/
int main (){
setlocale (LC_ALL, "");

float i = 55.55;
float quadrado = i * i;
printf("Digite um n�mero real:\n");
scanf("%.4f", &i);
printf("O quadrado do n�mero digitado � \n%.2f", quadrado);
return 0;
}
