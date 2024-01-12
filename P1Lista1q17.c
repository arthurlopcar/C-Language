#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*17-A importância de R$780.000,00 será dividida entre três ganhadores de um
concurso. Calcule e imprima a quantia ganha por cada um dos ganhadores.*/
int main(){
setlocale(LC_ALL, "");

float primeiroGanhador, segundoGanhador, terceiroGanhador;

primeiroGanhador = 780000 * 0.46;
segundoGanhador = 780000 * 0.32;
terceiroGanhador = 780000 * 0.22;

printf("O grande vencedor do concurso recebeu\n%.2f\n\n", primeiroGanhador);

printf("O segundo lugar recebeu\n%.2f\n\n", segundoGanhador);

printf("E por fim, o terceiro ganhador ganhou\n%.2f\n\n", terceiroGanhador);

printf("E eu sem ganhar nada :(\n");

return 0;
}
