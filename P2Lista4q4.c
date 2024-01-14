#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    int totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
    return totalSegundos;
}

int main() {
    int horas, minutos, segundos;

    printf("Digite as horas, minutos e segundos no formato (hh mm ss): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    int totalSegundos = converterParaSegundos(horas, minutos, segundos);
    printf("Total de segundos: %d\n", totalSegundos);

    return 0;
}
