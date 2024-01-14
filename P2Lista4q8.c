#include <stdio.h>

int main() {
    int n, somatorio = 0;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O n�mero deve ser inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        somatorio += i;
    }

    printf("O somat�rio de 1 at� %d �: %d\n", n, somatorio);

    return 0;
}
