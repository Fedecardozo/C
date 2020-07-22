
# include <stdio.h>

int main(){
	
	
	int num,i=0,suma=0;
	
	printf("Ingrese la cantidad del vector: ");
	scanf("%i", &num);
	
	int vec[num];
	
	for(i=0; i<num; i++){
		
		printf("Ingrese numero de la posicion N %i:", (i+1));
		scanf("%i", &vec[i]);
		
		suma = suma + vec[i];
		
	}
	
	printf("La suma total del vector es: %i", suma);
	
}
