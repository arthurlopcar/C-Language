#include <stdio.h>
#include <stdlib.h>
/*12-Leia a idade e o tempo de serviço de um trabalhador
 e escreva se ele pode ou não se aposentar*/
 int main(){

 int idade, tempo;

 printf("Digite a idade do trabalhador:\n");
 scanf("%d", &idade);
 printf("Agora, digite o tempo de servico do trabalhador:\n");
 scanf("%d", &tempo);

if (idade <= 65)
    printf("O trabalhador pode se aposentar.\n");
else if (tempo >= 30)
    printf("O trabalhador pode se aposentar.\n");
else
    printf("O trabahador pode se aposentar");

return 0;
 }
