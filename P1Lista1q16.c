#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*16- Faça um programa que leia o valor de um produto
e imprima o valor com desconto, tendo em vista que
o desconto foi de 12%.*/
int main(){
setlocale(LC_ALL, "");

int valorProduto;
float desconto;

printf("Qual o valor do produto antes do deconto:\n");
scanf("%d", &valorProduto);

desconto = valorProduto * 0.88;

printf("O valor do produto com desconto foi:\n%.2f", desconto);

return 0;


}
