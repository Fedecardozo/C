
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	//Pedir una cadena de caracteres (string) al usuario, e indicar cuántas veces aparece cada vocal en dicha cadena. Utilizar punteros
	char *cadena [100];
	int i,cont=0;
		
	printf("Ingrese una cadena de carecteres: ");
	scanf("%s", &cadena);
//	gets(cadena);
	
	
	for(i=0; i<100; i++){
		
		switch(cadena[i]){
			
			case 'a': cont++; break;
			
		}
		
		
	}
		
		
	printf("\nHay %i vocales: ", cont);
	
	
}
