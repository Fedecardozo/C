
# include <stdio.h>

int main(){
	
	//4.Escribir un programa que defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso (del �ltimo al primer elemento).
	
	int tam,num,i=0;
	
	printf("Ingrese tama�o del vector: ");
	scanf("%i", &tam);
	
	int vec[tam];
	
	for(i=0; i<tam; i++){
		
		printf("Ingrese numero: ");
		scanf("%i", &num);
		vec[i] = num;
		
	}
	
	for(i=tam-1; i>=0; i--){
		
		printf("\nPosicion %i Numero: %i",(i+1),vec[i]);
		
	}
	
}
