
# include<stdio.h>

// Prototitopo
int funpot(int x,int y);

int main(){
	
	/*Escriba una funci�n llamada funpot() que eleve un n�mero entero que se le 
	transmita a una potencia entera positiva que tambi�n se pase como par�metro y devuelva el resultado.*/
	
	int num,pot;
	
	printf("Ingrese numero: ");
	scanf("%i", &num);
	printf("Ingrese la potencia: ");
	scanf("%i", &pot);
	
	printf("El resultado es: %i", funpot(num,pot));
	
}

int funpot(int x,int y){
	
	int resultado=0,i=0;
	
	resultado = x;
	
	for(i = 0; i<y-1; i++){
		
		resultado = resultado * x;
		
	}
	
	return resultado;
	
	
	
}
