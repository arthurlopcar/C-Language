#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*10 - Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de
opera��es matem�ticas (as b�sicas, por exemplo).*/
int main (){
setlocale(LC_ALL,"");

int opcao, num1, num2;

do {
    printf("\n1-Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n0-Sair\n\n");
scanf("%d", &opcao);

if (opcao > 0 && opcao < 5){
    printf("Digite dois valores:");
    scanf("%d%d,&num1,&num2");
}
switch(opcao){
    case 0:
        printf("Saindo...\n");
        break;
    case 1:
        printf("Soma: %d\n", num1 + num2);
        break;
    case 2:
        printf("Subtra��o: %d\n", num1 - num2);
        break;
    case 3:
        printf("Multiplica��o: %d\n", num1 * num2);
        break;
    case 4:
        while (num2==0){
                printf("N�o existe divis�o por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
        printf("Divis�o: %d\n", num1 / num2);
        break;

    default:
        printf("Op��o inv�lida.\nDigite outra op��o:");
        }
    }
}
while (opcao != 0);

return 0;
}
