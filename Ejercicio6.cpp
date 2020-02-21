#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	printf("\n El programa evaluara el valor de x en las siguientes funciones mientras cumpla las condiciones que esta requiere");
	printf("\n f(x)=x+3 si el valor ingresado de x es negativo o igual 0");
	printf("\n f(x)=x^2+2x si el valor ingresado de x es positivo");
	printf("\n Ingrese un valor para x: ");
	scanf("%d",&x);
	if(x<=0){
		y=x+3;
		printf("\n El resultado de la funcion f(x)=x+3 evaluada en %d es: %d",x,y);
		}
    else{
    	y=(x*x)+(2*x);
    	printf("\n El resultado de la funcion f(x)=x^2+2x evaluada en %d es: %d",x,y);
	}
	}
