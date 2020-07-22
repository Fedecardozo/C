
# include <stdio.h> 

int main (){
	
	int altura, ancho, i = 0, j = 0;
	
	printf("Ingrese altura: ");
	scanf("%i", &altura);
	printf("Ingrese ancho: ");
	scanf("%i", &ancho);
	printf("\n");
	
	for(i = 0; i < altura; i++){
		
		for(j = 0; j < ancho; j++){
			
			printf(" *");
			
		}
		printf("\n");
			
	}
	
	
}
