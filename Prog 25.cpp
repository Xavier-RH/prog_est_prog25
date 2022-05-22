/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que cuente el numero de enteros negativos introducidos por teclado,
	el programa terminara de leer número cuando se introduzca un cero.
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
