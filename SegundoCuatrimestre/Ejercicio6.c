# include<stdio.h>

// Prototitopo
void temp(int x,int c);
int menu();

int main(){
	
	/*Hacer un programa que pida una temperatura en grados Celsius,
	 muestre un menú para convertirla a Fahrenheit o Kelvin y devuelva el resultado, utilizando funciones.*/
	
	int opc;
	float celsius;
	
	printf("Ingrese celsius: ");
	scanf("%f", &celsius);
	
	opc = menu();
	
	temp(opc,celsius);
	
}

int menu(){
	
	int opc;
	
	printf("******* Menu ********\nOpciones:\n1-Fahrenheit 2-Kelvin: \n");
	scanf("%i", &opc);
	
	return opc;
	
}

void temp(int x, int c){
	
	float f,k;
	
	switch(x){
		
		case 1: 
		
			// F = (9*c)/5 + 32;
			f = (9*c)/5 + 32;
			printf("El resultado en Fahrenheit es: %f", f);
			break;
		
		case 2:
			
			// K= C + 273.15;
			k = c + 273.15;
			printf("El resultado en Kelvin es: %f", k);
			break;
		
		default: printf("Opcion no existente!"); break;
	}
	
}
