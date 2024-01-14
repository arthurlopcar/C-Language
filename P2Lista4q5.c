#include <stdio.h>

int formaTriangulo(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void identificarTipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("Triangulo equilatero\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles\n");
    } else {
        printf("Triangulo escaleno\n");
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        if (formaTriangulo(lado1, lado2, lado3)) {
            identificarTipoTriangulo(lado1, lado2, lado3);
        } else {
            printf("Os lados fornecidos não formam um triangulo.\n");
        }
    } else {
        printf("Os lados devem ser maiores que zero.\n");
    }

    return 0;
}
