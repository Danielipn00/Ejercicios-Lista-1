#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c=0;
	printf("Caja fuerte");
	while(c==0){
	printf("\n Ingrese el primer digito de su contrasena: ");
	scanf("%d",&a);
	printf("\n Ingrese el segundo digito de su contrasena: ");
	scanf("%d",&b);
	printf("\n Ingrese el tercer digito de su contrasena: ");
	scanf("%d",&c);
	if(a==3){
		if(b==9){
			if(c==5){
		printf("\n Bienvenido hacker");
		}
		else{
		printf("\n Contrasena incorrecta vuelva a intentarlo");	
		c=0;
	}}
		else{
		printf("\n Contrasena incorrecta vuelva a intentarlo");	
		c=0;
	}}
	else{
		printf("\n Contrasena incorrecta vuelva a intentarlo");
		c=0;
	}}}
	
