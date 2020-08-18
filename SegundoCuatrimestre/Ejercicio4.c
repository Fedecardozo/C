
# include<stdio.h>

// Prototitopo
float cuadrado(float x);

int main(){
	
	/*Escriba una función llamada cuadrado() que calcule el cuadrado del valor que se le transmite y devuelva el resultado.
	 La función deberá ser capaz de elevar al cuadrado números flotantes.*/
	 
	 float num;
	 
	 printf("Ingrese numero: ");
	 scanf("%f", &num);
	 
	 printf("El resultado es: %.2f", cuadrado(num));
	
}

float cuadrado(float x){
	
	return x * x;
	
}
