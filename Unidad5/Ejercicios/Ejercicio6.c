
# include <stdio.h>

int main(){
	
	//6.Escribir un programa que defina un vector de n�meros y calcule si existe alg�n n�mero cuyo valor equivale a la suma de todos los dem�s.
	
	int tam,num,sum=0,i=0;
	
	printf("Ingrese tama�o del vector: ");
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

