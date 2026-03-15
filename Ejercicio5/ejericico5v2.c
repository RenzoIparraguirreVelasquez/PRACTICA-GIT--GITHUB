#include <stdio.h>

int Fibonacci(int n) {
    int anterior = 1;
    int actual = 1;
    int nou;
    int i;

    if (n == 0 || n == 1) {
        return 1;
    }

    for (i = 2; i <= n; i++) {
        nou = anterior + actual;
        anterior = actual;
        actual = nou;
    }

    return actual;
}

int realsIguals(double r1, double r2, double precisio) {
    double dif = r1 - r2;

    if (dif < 0) {
        dif = -dif;
    }

    if (dif < precisio) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double precisio, rao_previa, rao;
    int e0, e1, e2, n;
    int trobat = 0;

    printf("Introdueix la precisio: ");
    scanf("%lf", &precisio);

    e0 = Fibonacci(0);
    e1 = Fibonacci(1);
    e2 = Fibonacci(2);

    n = 2;

    rao_previa = (double)e1 / e0;
    rao = (double)e2 / e1;

    trobat = realsIguals(rao, rao_previa, precisio);

    while (trobat == 0) {
        e0 = e1;
        e1 = e2;
        n = n + 1;
        e2 = Fibonacci(n);

        rao_previa = rao;
        rao = (double)e2 / e1;

        trobat = realsIguals(rao, rao_previa, precisio);
    }

    printf("Rao auria aproximada: %.5lf\n", rao);
    printf("Terme Fibonacci utilitzat: %d\n", n);

    return 0;
}