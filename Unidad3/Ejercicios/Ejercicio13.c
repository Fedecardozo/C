
# include <stdio.h> 
# include <stdlib.h> 
# include <time.h> 

int main (){
	
	/*13.Realice un programa que solicite al usuario un n�mero entre 1 y 100.
	 El programa debe generar un n�mero aleatorio en ese mismo rango [1-100] e indicarle al usuario si el n�mero que digit� es menor o mayor al n�mero aleatorio, hasta que lo adivine.
	 Por �ltimo, deber� mostrarle el n�mero de intentos que le llev�.*/
	
	int num,cont=0,aleatorio;
	
	srand(time(NULL));
	aleatorio = rand()%100;
	
//	printf("Aleatorio: %i",aleatorio);
	printf("Ingrese un numero del 1 al 100: ");
	scanf("%i", &num);
	
	while(num<0 || num>100){
		
		printf("Error, Ingrese un numero del 1 al 100: ");
		scanf("%i", &num);
		
	}
	
	while(num != aleatorio){
		
		while(num<0 || num>100){
		
		printf("Error, Ingrese un numero del 1 al 100: ");
		scanf("%i", &num);
		
	}
		
		if(num > aleatorio){
			
			printf("Ingrese un numero mas chico: ");
			scanf("%i", &num);
			
		}else{
			
			printf("Ingrese un numero mas alto: ");
			scanf("%i", &num);
			
		}
		
		cont++;
		
	}
	
	printf("\n �Felicidades! lo hiciste en %i intentos", cont);
	
	//14.Hacer un programa que descomponga un n�mero ingresado por teclado en sus factores primos.
	
/*	int num,i=0,j=0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	for(i = num; i > 1; i--){
		
		int cont = 0;
		
		
		for(j = i; j > 1; j--){
			
		//	printf("%i, ", j);
			
			if(i % j == 0){
				
				cont++;
				
			}
			
		}
		
		if(i == num){
			
			printf("Los numeros primos son: ");
			
		}
		
		if(cont == 1){
			
			printf("%i, ", i);
			
		}
		
	}
	
	printf("1\n");*/
	
}
	
