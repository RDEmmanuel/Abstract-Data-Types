#include <stdio.h>
#include <stdlib.h>
#include "sumaDosEnteros.h"

int x, y;
int main()
{
	printf("Ingrese el primer valor: ");
	scanf("%d", &x); printf("\n");
	printf("Ingrese el segundo valor: ");
	scanf("%d", &y); printf("\n");
	printf("El resultado de la suma es: %d", sumaDosEnteros(x,y));
	return 0;
}

