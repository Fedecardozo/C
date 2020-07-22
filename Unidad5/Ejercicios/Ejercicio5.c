
# include <stdio.h>

int main(){
	
	//5.Escribir un programa que calcule el mayor valor de los elementos de un vector definido.
	
	int numMax,i=0;

	int vec[5] = {65,88,58,72,22};

	for(i=0; i<5; i++){
		
		if(i == 0){
			
			numMax = vec[i];
			
		}else if(vec[i] > numMax){
			
			numMax = vec[i];
			
		}
		
		
		
	}
	
	printf("El numero maximo es: %i", numMax);
	
}
