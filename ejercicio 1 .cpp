//Escribe un prorgama que acepte tres numeros, horas minutos y segundos y devuelva
//La hora que sera dentro de un segundo, controlando que sea una hora correcta.

#include<stdio.h>

int main(){
	int horas, minutos, segundos, horaf;
	
	printf("Ingrese la hora: "); scanf(" %i",&horas);
	printf("Ingrese los minutos: "); scanf(" %i",&minutos);
	printf("Ingrese los segundos: "); scanf(" %i",&segundos);
	
	if((horas>= 0 && horas <= 23) && (minutos >= 0 && minutos <= 59) && (segundos >= 0 && segundos <= 59)){
		
		horaf = segundos + 1;
		if(horaf==60){
		minutos += 1;
		horaf = 0;
		}
		if(minutos==60){
		horas += 1;
		minutos = 0;
		}
		if(horas == 24){
			horas == 0;
		}
		printf("La hora más un segundo es: %i:%i:%i",horas, minutos,horaf);
}
	else{
		printf("La hora ingresada es incorrecta.");
	}
	

	
	return 0;
}
