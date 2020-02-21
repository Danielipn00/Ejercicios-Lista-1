#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b;
	printf("Ingrese un numero: ");
	scanf("%f",&a);
	printf("Ingrese otro numero: ");
	scanf("%f",&b);
	if(a>b){
		printf("El numero %.2f es mayor a %.2f",a,b);
		}
    if(a<b){
		printf("El numero %.2f es menor a %.2f",a,b);
	}
	if(a==b){
		printf("El numero %.2f es igual a %.2f",a,b);
	}
}
