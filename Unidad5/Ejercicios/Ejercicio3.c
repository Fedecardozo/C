
# include <stdio.h>

int main(){
	
	/*3.Escribir un programa que lea de la entrada est�ndar un vector de n�meros y 
	muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.*/
	
	int tam,num,i=0;
	
	printf("Ingrese tama�o del vector: ");
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
