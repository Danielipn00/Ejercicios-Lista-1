#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b,c=2;
	printf("\n Ingrese un numero: ");
	scanf("%f",&a);
	printf("\n Ingrese otro numero: ");
	scanf("%f",&b);
	printf("\n Ingrese otro numero: ");
	scanf("%f",&c);
	if(a<b){
		if(b<c){
			printf("\n %.2f, %.2f, %.2f",a,b,c);
		}}
	if(a<c){
		if(c<b){
			printf("\n %.2f, %.2f, %.2f",a,c,b);
		}}
	if(b<a){
		if(a<c){
			printf("\n %.2f, %.2f, %.2f",b,a,c);
		}
	}
	if(b<c){
		if(c<a){
			printf("\n %.2f, %.2f, %.2f",b,c,a);
		}
	}
	if(c<a){
		if(a<b){
			printf("\n %.2f, %.2f, %.2f",c,a,b);
		}
	}
	if(c<b){
		if(b<a){
			printf("\n %.2f, %.2f, %.2f",c,b,a);
		}
	}
	}
