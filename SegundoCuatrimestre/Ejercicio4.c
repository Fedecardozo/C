
# include<stdio.h>

// Prototitopo
float cuadrado(float x);

int main(){
	
	/*Escriba una funci�n llamada cuadrado() que calcule el cuadrado del valor que se le transmite y devuelva el resultado.
	 La funci�n deber� ser capaz de elevar al cuadrado n�meros flotantes.*/
	 
	 float num;
	 
	 printf("Ingrese numero: ");
	 scanf("%f", &num);
	 
	 printf("El resultado es: %.2f", cuadrado(num));
	
}

float cuadrado(float x){
	
	return x * x;
	
}
