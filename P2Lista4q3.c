#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

double calcularVolumeEsfera(double raio) {
    double volume = (4.0 / 3.0) * PI * pow(raio, 3);
    return volume;
}

int main() {
    double raio;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    if (raio >= 0) {
        double volume = calcularVolumeEsfera(raio);
        printf("O volume da esfera de raio %.2f eh: %.2f\n", raio, volume);
    } else {
        printf("O raio deve ser um valor nao negativo.\n");
    }

    return 0;
}
