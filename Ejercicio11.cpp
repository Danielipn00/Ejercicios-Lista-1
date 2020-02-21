#include<stdio.h>
#include<stdlib.h>
int main(){
	int y1,y2,x1,x2;
	float m;
	printf("\n Ingrese el valor de x1: ");
	scanf("%d",&x1);
	printf("\n Ingrese el valor de y1: ");
	scanf("%d",&y1);
	printf("\n Ingrese el valor de x2: ");
	scanf("%d",&x2);
	printf("\n Ingrese el valor de y2: ");
	scanf("%d",&y2);
	if((x2-x1)==0){
		printf("La pendiente es vertical");
	}
	else{
		m=(y2-y1)/(x2-x1);
		printf("El valor de la pendiente es: %.2f",m);
		}
	}
