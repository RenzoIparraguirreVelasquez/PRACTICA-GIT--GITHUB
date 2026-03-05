#include <stdio.h>

float importAmbIVA(float importeSinIVA) {
    return importeSinIVA * 1.16; 
}

int main() {
    float precio = 100.0;
    printf("El precio con IVA es: %.2f\n", importAmbIVA(precio));
    return 0;
}