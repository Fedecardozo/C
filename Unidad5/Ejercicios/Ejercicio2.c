
# include <stdio.h>

int main(){
	
	/*2.Escribir un programa que defina un vector de números y calcule el producto de todos sus elementos.*/
	
	int num,producto=0,llenar,i=0,j=0;
	
	printf("Ingrese el tamaño del vector: ");
	scanf("%i", &num);
	
	int vector[num];
	
	for(i=0; i<num; i++){
		
		printf("Ingrese numero posicion %i : ", (i+1));
		scanf("%i", &llenar);
		
		vector[i] = llenar;
		
	}
	
	producto = vector[0];
	
	for(i=1; i<num; i++){
		
		producto = producto * vector[i];
		
	}
	
	printf("El resultado es: %i", producto);
	
	return 0;
}
