#include<stdio.h>
#include<stdlib.h>
int main(){
	int edad,total,descuento;
	printf("\n Boleto normal: $75");
	printf("\n Ninos de 3 a 12 anios: 60 por ciento de descuento");
	printf("\n Adultos mayores de 60 anios: 55 por ciento de descuento");
	printf("\n Ingrese su edad: ");
	scanf("%d",&edad);
	if(edad>=0){
		if(edad<3){
			printf("\n Entra gratis");
		}
	}
	if(edad>=3){
	    if(edad<=12){
	    	descuento=(75)*(.60);
	    	total=75-descuento;
	    	printf("\n Costo del boleto aplicado el descuento de nino: $%d",total);
		}
	}
	if(edad>=60){
	    	descuento=(75)*(.55);
	    	total=75-descuento;
	    	printf("\n Costo del boleto aplicado el descuento de adulto: $%d",total);
	}
	if(edad>12){
		if(edad<60){
			printf("\n No aplica promocion, boleto regular: $75");
		}
	}
}
