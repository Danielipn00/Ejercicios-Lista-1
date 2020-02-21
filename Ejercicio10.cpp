#include<stdio.h>
#include<stdlib.h>
int main(){
	int opc,b,h=0,a;
	while(h==0){
	printf("\n 1.- Calcular el area de un triangulo");
	printf("\n 2.- Calcular el area de un trapecio");
	printf("\n 3.- Calcular el area de un rectangulo");
	printf("\n Seleccione una opcion: ");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			printf("\n Ingrese la base: ");
			scanf("%d",&b);
			printf("\n Ingrese la altura: ");
			scanf("%d",&h);
			printf("\n El area del triangulo es: %d",(b*h)/2);
			break;
		case 2:
			printf("\n Ingrese el lado a: ");
			scanf("%d",&a);
			printf("\n Ingrese el lado b: ");
			scanf("%d",&b);
			printf("\n Ingrese la altura: ");
			scanf("%d",&h);
			printf("\n El area del trapecio es: %d",h*((a+b)/2));
			break;
		case 3:
			printf("\n Ingrese la base: ");
			scanf("%d",&b);
			printf("\n Ingrese la altura: ");
			scanf("%d",&h);
			printf("\n El area del rectangulo es: %d",(b*h));
			break;
		default:
			system("cls");
			printf("\n Elija una opcion valida");
			h=0;
		}
	}
}
