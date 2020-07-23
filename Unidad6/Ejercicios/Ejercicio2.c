
#include <stdio.h>

int main(){
	
	//2.Dada una matriz de 3x3 mostrar en pantalla su diagonal principal
	
	int matriz[3][3] = {5,8,96,4,12,7,55,77,85};
	int i=0,j=0;
	
	for(i=0; i<3; i++){
		
		printf("\n");
		
		for(j=0; j<3; j++){
			
			printf("|%i|",matriz[i][j]);
			
		}
		
	}
	
	printf("\n\nDiagonal principal: ");
	
	for(i=0 ; i<3; i++){
		
		printf(" %i ",matriz[i][i]);
		
	}
	
	
}
