#include <stdio.h>
#include <iostream>

int main(){
	
	int x;
	
	printf("Introduce un numero entre 1 y 4: ");
	scanf("%i",&x);
	
	if(x == 1){
		printf("Lunes\n");
	}
	else if(x == 2){
		printf("Martes.\n");
	}
	else if(x == 3){
		printf("Miercoles\n");
	}
	else if(x == 4){
		printf("Jueves\n");
	}
	else{
		printf("El numero introducido es incorrecto\n");	
	}
	
	system ("pause");
	return 0;
}
