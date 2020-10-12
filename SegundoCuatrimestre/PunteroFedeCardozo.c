
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	//Pedir una cadena de caracteres (string) al usuario, e indicar cuántas veces aparece cada vocal en dicha cadena. Utilizar punteros
	char cadena [20];
	char *puntero;
	int i,cont=0,tam;
	int contA=0, contE=0,contI=0,contO=0,contU=0;
		
	printf("Ingrese una cadena de carecteres: ");
//	scanf("%s", &puntero);
	gets(cadena);
	
	puntero = cadena;
	
	tam = strlen(puntero);
	
	strupr(puntero);
	
//	printf("%i %s",tam,puntero);	
//	puts(cadena);
	for(i=0; i<tam; i++){
		
		switch(*puntero){
			
			case 'A': cont++; contA++; break;
			case 'E': cont++; contE++; break;
			case 'I': cont++; contI++; break;
			case 'O': cont++; contO++; break;
			case 'U': cont++; contU++; break;
			
		}
		puntero++;
		
	}
		
	printf("\nContiene %i vocales: ", cont);
	printf("\nCantidad A: %i",contA);
	printf("\nCantidad E: %i",contE);
	printf("\nCantidad I: %i",contI);
	printf("\nCantidad O: %i",contO);
	printf("\nCantidad U: %i",contU);
	
}
