#include <stdio.h>

// 1. FUNCIÓN IVA (Calcula el 16%)
float calcularTotalConIVA(float precioBase) {
    return precioBase * 1.16;
}

// 2. ACCIÓN NIF (Muestra el número)
void mostrarNIF(int numeroDNI) {
    printf("El DNI introducido es: %d\n", numeroDNI);
}

// 3. ACCIÓN INTERÉS (Calcula el rendimiento)
void calcularInteresAnual(float cantidad, float porcentajeInteres) {
    float rendimiento = cantidad * (porcentajeInteres / 100);
    printf("El rendimiento anual es: %.2f\n", rendimiento);
}

int main() {
    // Esto es para que tú y Renzo podáis probar que funciona
    printf("Precio con IVA de 100: %.2f\n", calcularTotalConIVA(100));
    mostrarNIF(12345678);
    calcularInteresAnual(1000, 5);
    return 0;
}