
# include <stdio.h>

int main(){
	
	/*3.Escribir un programa que lea de la entrada estándar un vector de números y 
	muestre en la salida estándar los números del vector con sus índices asociados.*/
	
	int tam,num,i=0;
	
	printf("Ingrese tamaño del vector: ");
	scanf("%i", &tam);
	
	int vec[tam];
	
	for(i=0; i<tam; i++){
		
		printf("Ingrese numero: ");
		scanf("%i", &num);
		vec[i] = num;
		
	}
	
	for(i=0; i<tam; i++){
		
		printf("\nPosicion %i Numero: %i",(i+1),vec[i]);
		
	}
	
}
