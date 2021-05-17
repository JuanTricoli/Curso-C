#include<stdio.h>


int main(){
	
	int x;
	
	printf("Introduzca un numero: ");
	scanf("%i",&x);
	
	switch (x){
		case 1: printf("Lunes\n");break;
		case 2: printf("Martes\n");break;
		case 3: printf("Miercoles\n");break;
		case 4: printf("Jueves\n");break;
		default: printf("El numero introducido es incorrecto.\n");
	}
	
	return 0;
}
