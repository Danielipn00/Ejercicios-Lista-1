#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	printf("Ingrese otro numero: ");
	scanf("%d",&b);
	if(a%b==0){
		printf("El numero %d es divisible entre %d",a,b);
	}
	else{
		printf("El numero %d no es divisible entre %d",a,b);
	}
}
