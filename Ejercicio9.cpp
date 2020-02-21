#include <stdio.h>
int main() {
char a;
	printf("Introduce un numero o un caracter: "); 
	a=getchar();
	switch(a){
		case '1':
		case '2':
	    case '3':
	    case '4':
		case '5':
	    case '6':
	    case '7':
		case '8':
	    case '9':
	    case '0':
	    	printf("Es numero");
	    	break;
	default:
		printf("Es caracter");
	}
	
}

