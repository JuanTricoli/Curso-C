#include<stdio.h>

int main(){
	int i;
	i = 10;
	
/*	while(i < 15){
		printf("Esto no se va a ejecutar nunca.\n");
		i++;
	}
*/
	do{
		printf("Esto se ejecuta al menos una vez.\n");
		i++;
	}while(i < 15);	
	
	return 0;
}
