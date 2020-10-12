
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	//Pedir una cadena de caracteres (string) al usuario, e indicar cuántas veces aparece cada vocal en dicha cadena. Utilizar punteros
	char cadena [20];
	char *puntero;
	int i,cont=0,tam;
		
	printf("Ingrese una cadena de carecteres: ");
//	scanf("%s", &puntero);
	gets(cadena);
	
	puntero = cadena;
	
	tam = strlen(puntero);
	
	strupr(puntero);
	
//	printf("%i %s",tam,puntero);	
//	puts(cadena);
	for(i=0; i<tam; i++){
		
		switch(puntero[i]){
			
			case 'A': cont++; break;
			case 'E': cont++; break;
			case 'I': cont++; break;
			case 'O': cont++; break;
			case 'U': cont++; break;
			
		}
		
	}
		
	printf("\nHay %i vocales: ", cont);
	
	
}
