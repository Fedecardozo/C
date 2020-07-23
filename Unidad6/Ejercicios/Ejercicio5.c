
#include <stdio.h>

int main(){
	
	//5.Hacer un programa que pida al usuario los datos para rellenar una matriz de 3x3 y cree la matriz transpuesta.
	
	int matriz[3][3];
	int i=0,j=0;
	
	printf("Ingrese numeros para llenar una matriz de 3x3: \n");
	
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			
			printf("Posicion [%i][%i]: ",i,j);
			scanf("%i", &matriz[i][j]);
			
		}
		
	}
	
	printf("\nMatriz original: ");
	
	for(i=0; i<3; i++){
		
		printf("\n");
		
		for(j=0; j<3; j++){
			
			printf("[%i] ",matriz[i][j]);
			
		}
		
	}
	
	printf("\nMatriz traspuesta: ");
	
	for(i=0; i<3; i++){
		
		printf("\n");
		
		for(j=0; j<3; j++){
			
			printf("[%i] ",matriz[j][i]);
			
		}
		
	}
	
}
