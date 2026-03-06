#include <stdio.h>

/* Nombre del algoritmo: calcularTotalConIVA */

/*Precondición:*/
    precioBase >= 0

float calcularTotalConIVA(float precioBase);

/*Declaración de variables:*/
    precioBase : float

/*Postcondición:
    Devuelve el precio total con el 16% de IVA incluido.
*/


void mostrarNIF(int numeroDNI);


/* Nombre del algoritmo: calcularInteresAnual*/

/*Precondición:*/
    cantidad >= 0
    porcentajeInteres >= 0
    
void calcularInteresAnual(float cantidad, float porcentajeInteres);

/*Declaración de variables:*/
    cantidad : float
    porcentajeInteres : float



/*Postcondición:
    Calcula y muestra el interés anual obtenido:
    interes = cantidad * porcentajeInteres / 100
*/

