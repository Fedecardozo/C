
# include<stdio.h>

// Prototitopo
float mult(float x, float y);


int main(){
	
	//Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique estos dos números y devuelva el resultado.
	float num,num2,res;
	
	printf("Ingrese 2 numeros: ");
	scanf("%f", &num);
	scanf("%f", &num2);
	
	res = mult(num,num2);
	
	printf("El resultado es: %.2f", res);
	
}

float mult(float x, float y){
	
	float resultado;
	
	resultado = x * y;
	
	return resultado;
	
}
