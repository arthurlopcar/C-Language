#include <stdio.h>

const char* meses[] = {
    "janeiro", "fevereiro", "março", "abril", "maio", "junho",
    "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
};

void imprimirDataPorExtenso(int dia, int mes, int ano) {
    printf("Data: %02d/%02d/%d \nImprimir: %d de %s de %d\n", dia, mes, ano, dia, meses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;
    printf("Digite o dia, mes e ano (no formato dd mm aaaa):");
    scanf("\n%d \n%d \n%d", &dia, &mes, &ano);

    imprimirDataPorExtenso(dia, mes, ano);

    return 0;
}
