
# include <stdio.h>

	void menu();
	int opcion();
	void calcu(int x);
	float sum(float x, float y);
	float res(float x, float y);
	float mul(float x, float y);
	float div(float x, float y);

int main(){
	
	/*Hacer un programa que muestre un menú con las opciones sumar, 
	restar, multiplicar y dividir. El programa solicitará una opción y realizará la tarea elegida. Usar procedimientos.*/
	int opc;
	
	menu();
	opc = opcion();
	
	calcu(opc);
	
}

void menu(){
	
	printf("***** Menu de opciones*****\n");
	printf("  1) Sumar \n");
	printf("  2) Restar \n");
	printf("  3) Multiplicar \n");
	printf("  4) Dividir \n");
	
}

int opcion(){
	
	int x;
	
	printf("Ingrese opcion: ");
	scanf("%i", &x);
	
	return x;
	
}

void calcu(int x){
	
	float n1,n2;
	
	if(x<1 || x> 4){
		
		printf("Opcion incorrecta! ");
		
	}else{
		
		printf("Ingrese los numeros: ");
		scanf("%f", &n1);
		printf("Siguiente numero: ");
		scanf("%f", &n2);
		
		switch(x){
			
			case 1: 
				printf("El resultado de la suma es: %.2f", sum(n1,n2)); 
				break; 
			case 2: 
				printf("El resultado de resta es: %.2f", res(n1,n2)); 
				break;
			case 3: 
				printf("El resultado de la multiplicacion es: %.2f", mul(n1,n2)); 
				break;
			case 4: 
				if(n1 == 0 || n2 == 0){
					
					printf("No se puede dividir por cero");
					
				}else {
					
					printf ("El resultado de la divicion es: %.2f", div(n1,n2)); 
					
				}
				break;
					
		}
		
	}
	
}

float sum(float x, float y){
	
	return x + y;
	
}
float res(float x, float y){
	
	return x - y;
	
}
float mul(float x, float y){
	
	return x * y;
	
}
float div(float x, float y){
		
	return x / y;
		
}







