#include <stdio.h>
#include <stdlib.h>
#include "operacionesBasicas.h"

float a, b;
void Menu();

int main()
{
	printf(">>>Operaciones Basicas Calculadora<<<\n\n");
	printf("Ingrese el primer valor: ");
	scanf("%f", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%f", &b);
	Menu();
	return 0;
}

void Menu()
{
	int menu;
	printf("\nQue opracion desea realizar?\n");
	printf("1-Sumar\n");
	printf("2-Restar\n");
	printf("3-Multiplicar\n");
	printf("4-Dividir\n");
	printf("0-Salir\n");
	printf("Elija una opcion: ");
	scanf("%d", &menu); fflush(stdin);
	
	while (menu != 0)
	{
		switch (menu)
		{
			case 1:
				{
					printf("\nEl resultado de la suma es: %.2f\n\n", Sumar(a, b));
					system ("pause");
					Menu();
				}break;
			
			case 2:
				{
					printf("\nEl resultado de la resta es: %.2f\n\n", Restar(a, b));
					system ("pause");
					Menu();
				}break;
			
			case 3:
				{
					printf("\nEl resultado de la multiplicacion es: %.2f\n\n", Multiplicar(a, b));
					system ("pause");
					Menu();
				}break;
			
			case 4:
				{
					printf("\nEl resultado de la division es: %.2f\n\n", Dividir(a, b));
					system ("pause");
					Menu();
				}break;
				
		}
	printf("\nQue opracion desea realizar?\n");
	printf("\n1-Sumar\n");
	printf("2-Restar\n");
	printf("3-Multiplicar\n");
	printf("4-Dividir\n");
	printf("0-Salir\n");
	printf("Elija una opcion: ");
	scanf("%d", &menu); fflush(stdin);
	}
}







