#include <stdlib.h>
#include <stdio.h>
#include "operacionesRectangulo.h"

float a, b;

int main()
{
	printf("Ingrese la base del rectangulo: ");
	scanf("%f", &a); 
	printf("Ingrese la altura del rectangulo: ");
	scanf("%f", &b); 
	printf("\nEl perimetro del rectangulo es: %.2f\n", perimetroRectangulo(a, b));
	printf("\nEl area del rectangulo es: %.2f\n", areaRectangulo(a, b));
	return 0;
}

