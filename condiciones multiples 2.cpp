#include<stdio.h>

int main(){
	int x;
	
	printf("Introduce un numero: ");
	scanf("%i",&x);
	
	if(x >= 1 || x <= 10){ // O || Con que una de las condiciones sea cierta ENTRA.
		printf("El numero %i esta entre 1 y 10.\n",x);
	}	
	else{
		printf("El numero %i no esta entre 1 y 10.\n",x);
	}
	return 0;
}
