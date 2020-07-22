
# include <stdio.h>

int main(){
	
	//6.Escribir un programa que defina un vector de números y calcule si existe algún número cuyo valor equivale a la suma de todos los demás.
	
	int tam,num,sum=0,i=0;
	
	printf("Ingrese tamaño del vector: ");
	scanf("%i", &tam);
	
	int vec[tam];
	
	for(i=0; i<tam; i++){
		
		printf("Ingrese numero: ");
		scanf("%i", &num);
		vec[i] = num;
		
	}
	
	for(i=0; i<tam; i++){
		
		sum = sum + vec[i];
		
	}
	
	
	for(i=0; i<tam; i++){
		
		if(sum-vec[i] == vec[i]){
			
			printf("La suma del resto es: %i",(sum-vec[i]));
			printf("\nEl numero %i que esta en la posicion %i es igual a la suma del resto",vec[i],(i+1));
			
		}
		
	}
	
	
}

