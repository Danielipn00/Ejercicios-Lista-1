#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	if(a%2==0){
		if(a>0){
		printf("El numero %d es par",a);
	}
	else{
		printf("El numero %d no es par, ni divisible entre 3",a);
	}}
	else if(a%3==0){
		printf("El numero %d es divisible entre 3",a);
	}
	else{
		printf("El numero %d no es par, ni divisible entre 3",a);
	}
	
}
