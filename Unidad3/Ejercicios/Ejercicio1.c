
#include <stdio.h>

int main (){
	
/*	1.	Realizar un programa que pida al usuario un número 
	y muestre su tabla de multiplicar hasta el 10.*/
	
/*	int num,res,i=0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	for(i= 1; i<11 ; i++){
		
		res = num * i;
		
		printf( "La multiplicacion de %i por %i es: %i \n",num,i,res);
		
		
	}*/
	
	/*2.Hacer un programa que le pida números al usuario hasta que se ingrese el número 0. 
	En ese momento el programa debe terminar y mostrar la cantidad de números*/
	
/*	int num,contador=0;
	
	do{
		
		printf("Ingrese un numero para finalizar ingrese cero: ");
		scanf("%i", &num);
		
		if(num>0){
			
			contador = contador + 1;
			
		}
		
		
	}while(num!= 0);
	
	printf("El total de numero mayor a cero es: %i", contador);*/
	
	/*3.Calcular y mostrar la suma de los cuadrados de los primeros 10 
	números enteros mayores que 0.*/
	
	int num,contador=0,acumulador=0;
	
	do{
		
		printf("Ingrese numero: ");
		scanf("%i", &num);
		
		if(num>0){
			
			acumulador = acumulador + (num * num);
			
			contador = contador + 1;
			
		}
		
		
	}while(contador != 10);
	
	printf("El total es: %i", acumulador);
	
	
}
