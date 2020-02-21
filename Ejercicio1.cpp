#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	if(a>100){
		printf("El numero %d es mayor a 100",a);
	}
	else if(a==100){
		printf("El numero %d es igual a 100",a);
	}
	else{
		printf("El numero %d no es mayor a 100",a);
	}
}
