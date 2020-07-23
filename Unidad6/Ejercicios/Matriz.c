
# include <stdio.h> 
# include <stdlib.h> 
# include <time.h> 

int main(){
	
	int matriz[3][3],aleatorio,i=0,j=0;
	
	srand(time(NULL));
	
	
	for(i = 0; i<3; i++){
		
		for(j = 0; j<3; j++){
			
			aleatorio = rand()%100;
			
			matriz[i][j] = aleatorio;
			
		}
		
	}
		
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			
			printf("%i ", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\nMatriz diagonal \n");
	
	for(i=0; i<3; i++){
		
		printf("%i ", matriz[i][i]);
			
	}	
	
	
}
