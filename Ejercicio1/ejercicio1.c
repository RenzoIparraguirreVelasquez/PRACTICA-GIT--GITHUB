#include <stdio.h>

float calcularTotalConIVA(float precioBase) {
    return precioBase * 1.16;
}

void mostrarNIF(int numeroDNI) {
    printf("El DNI introducido es: %d\n", numeroDNI);
}

void calcularInteresAnual(float cantidad, float porcentajeInteres) {
    float rendimiento = cantidad * (porcentajeInteres / 100);
    printf("El rendimiento anual es: %.2f\n", rendimiento);
}

int main() {
    printf("Precio con IVA: %.2f\n", calcularTotalConIVA(100));
    mostrarNIF(12345678);
    calcularInteresAnual(1000, 5);
    return 0;
}

