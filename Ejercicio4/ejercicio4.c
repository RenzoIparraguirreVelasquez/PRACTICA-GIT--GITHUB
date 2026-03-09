#include <stdio.h>
#include <math.h>

double capitalAcumulat(double C, int A, double R) {
    double resultat;

    resultat = C * pow((1 + R / 100.0), A);

    return resultat;
}

int main() {
    double capital, interes, final;
    int anys;

    printf("Introduce el capital inicial: ");
    scanf("%lf", &capital);

    printf("Introduce el numero de años: ");
    scanf("%d", &anys);

    printf("Introduce el interes anual (%%): ");
    scanf("%lf", &interes);

    final = capitalAcumulat(capital, anys, interes);

    printf("Capital final acumulado: %.2lf\n", final);

    return 0;
}
