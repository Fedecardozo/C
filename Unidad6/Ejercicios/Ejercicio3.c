
# include <stdio.h>

int main(){
	
	//3.Dada una matriz de tipo entero de 2x2, copiar todo su contenido hacia otra matriz.
	
	int mat[2][2] = {1,5,8,9};
	int copia[2][2];
	int i=0,j=0;
	
	printf("Copia matriz:");
	
	for(i=0; i<2; i++){
		
		printf("\n");
		
		for(j=0; j<2; j++){
			
			copia[i][j] = mat[i][j];
			printf("|%i|",copia[i][j]);
			
		}
		
	}
	
	
}
