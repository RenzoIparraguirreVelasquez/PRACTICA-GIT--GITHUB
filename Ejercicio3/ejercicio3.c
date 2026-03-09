/*
EJERCICIO 3
Justificación de las incorrecciones en las llamadas a funciones y acciones
*/

#include <stdio.h>

int main() {

    // Variables del algoritmo
    int m, n;
    float x, y;
    int u, w;      // booleanos representados como 0 o 1
    char e, f;

    m = 4;
    x = 6.5;
    u = 0;   // fals
    e = 'P';

    /*
    a) A( m, 5.3, u );

    Error:
    El segundo parámetro de la acción A es "entsor" (entrada y salida),
    por lo que debe ser una VARIABLE de tipo real.
    En la llamada se está pasando una constante (5.3).
    */

    /*
    b) y := B( u, x );

    Error:
    La función B espera como primer parámetro un ENTERO.
    En la llamada se está pasando la variable u, que es booleana.
    */

    /*
    c) si C( e, f ) llavors

    Error:
    La variable f se usa como parámetro pero no ha sido inicializada
    previamente, por lo que su valor es indefinido.
    */

    /*
    d) D( y, 230 + m );

    Error:
    El segundo parámetro de la acción D debe ser de tipo REAL.
    La expresión 230 + m produce un entero.
    */

    return 0;
}