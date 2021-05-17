#include<stdio.h>

int main(){
	
	char letra;
	
	do{
		printf("¿Quieres continuar?"); 
		fflush (stdin);
		scanf("%c",&letra );
		
	}while(letra != 's' && letra != 'S');
	
	return 0;
}
