#include<stdio.h>

int main(){
	int x, y, i;
	
	printf("Introducir un numero: "); scanf("%i",&x);
	printf("Introducir un numero mayor al anterior: "); scanf("%i",&y);
	
	
	do{
		printf("Introducir un numero mayor al anterior: "); scanf("%i",&y);
	}while (y < x);
	
	//For
	
	for (i = x + 1 ; i < y ; i++){ // se inicia el contador, se indica la condicion, se indica la operacion
		printf("%i, ",i);
	}
	
	printf("\n");
	
	//While
	
	i = x + 1;
	
	while(i < y){
		printf("%i, ",i);
		i++;
	}
	
	printf("\n");

	return 0;
}
