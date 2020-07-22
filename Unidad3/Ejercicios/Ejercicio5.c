
# include <stdio.h> 

int main (){
	
	/*5.Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30]
	 o se introduzca el valor 0. 
	El programa debe entregar la suma de los valores mayores a 0 introducidos.*/
	
	
/*	int num,total=0;
	
	do{
		
		printf("Ingrese numero: ");
		scanf("%i", &num);
		
		if(num > 0){
			
			total = total + num;
			
		}
		
		
	} while((num< 20 || num >30)  && (num != 0));
	
	printf("El total es: %i", total);*/
	
	/*6.Diseñar un programa que eleve un número x a un exponente y, sin usar la función pow().*/
	
	int x,y,i = 0,total=0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &x);
	printf("Ingrese exponente: ");
	scanf("%i", &y);
	
	for (i = 1; i<y ; i++){
		
		total = total + (x*x);
		
	}
	
	printf("El total es: %i", total);
	
}
