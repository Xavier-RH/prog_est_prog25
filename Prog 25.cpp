/* Autor: Xavier Romero Hern�ndez, Realizado: 24/02/2022 
	Programa que cuente el numero de enteros negativos introducidos por teclado,
	el programa terminara de leer n�mero cuando se introduzca un cero.
	*/
	
#include <stdio.h>

int main(){
	
	int numero, cont;
	
	do{
		printf("introduce un numero: ");
		scanf("%d",&numero);
		if(numero<0){
			cont++;
		}
	}while(numero!=0);
	
	printf("\nSe ingreso un total de %d numeros negativos",cont);

	return 0;
}
