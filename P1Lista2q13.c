#include <stdio.h>
#include <stdlib.h>
/*13 - Leia a distância em Km e a quantidade de litros de gasolina consumidos por um
carro em um percurso, calcule o consumo em Km=l e escreva uma mensagem de
acordo com a tabela*/
int main(){


float consumo;

printf("Digite o consumo deste veiculo:\n");
scanf("%f", &consumo);

if (consumo < 8)
    printf("Venda o carro!\n");
else if (8 < consumo > 14)
    printf("Economico!");
else
    printf("Super economico!\n");

return 0;
}
