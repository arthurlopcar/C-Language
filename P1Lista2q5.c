#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*5-Faça um programa que receba a altura e o sexo de uma pessoa
 e calcule e mostre seu peso ideal*/
 int main(){
 setlocale(LC_ALL,"");

 float altura, peso;
 char sexo;

printf("Qual a altura da pessoa?\n");
scanf(" %f", &altura);

printf("Qual o sexo da pessoa?\n");
 scanf(" %c", &sexo);

switch(sexo){
    case 'm':
        peso = (72.7*altura) - 58;
        printf("Seu peso ideal é %f", peso);

        break;
    case 'f':
        peso = (62.1 *altura) - 44.7;
        printf("Seu peso ideal é %f", peso);

        break;
    default:
        printf("Não foi informado\n");
    }
 return 0;
 }
