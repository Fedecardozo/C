
# include<stdio.h>

// Prototitopo
float mult(float x, float y);


int main(){
	
	//Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como par�metros, multiplique estos dos n�meros y devuelva el resultado.
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
