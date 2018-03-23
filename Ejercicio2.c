// Ejercicio 2 - Tema 3

#include<stdio.h>
int main()
{
	int x, y;
	printf("Introduzca 2 numeros enteros:\n");
	// Uso scanf con ampersand
	scanf("%d %d",&x,&y);
	if(x % y ==0)
	printf("El numero %d es divisible entre %d\n",x,y);
	else
	printf("Los numeros no son divisibles\n");
	
	return 0;
}
