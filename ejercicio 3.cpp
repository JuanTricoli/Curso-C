#include<stdio.h>

int main(){
	int x, i, numero, media;
	float suma;
	
	suma = 0;
	
	printf("Indique la cantidad de numeros que va a introducir: \n"); scanf("%i",&x);
	
	for(i = 0; i < x ; i++){
		printf("Indique un numero: "); scanf("%i",&numero);
		suma += numero;
	}
	
	media = suma / x;
	
	printf("La media de los numeros ingresados es: %i\n",media);
	
	return 0;
}
