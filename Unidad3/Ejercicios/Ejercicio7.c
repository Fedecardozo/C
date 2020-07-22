
# include <stdio.h> 

int main (){
	
	//7.Escriba un programa que pida un número n y realice la suma 1+2+3…+n
	
/*	int num,i=0,total = 0; 
	
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	for(i = 1 ; i <= num; i++){
		
		total = total + i; 
		
	}
	
	printf("El total es: %i", total);*/
	
	/*8.Escriba un programa que pida un número n y 
	realice la suma de los números impares desde 1 hasta n.*/
	
	int num, i = 0, total = 0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	for(i=0; i<=num; i = i+2){
		
		total = total + i;
		
	}
	
	printf("El total es: %i", (total+num));
	
}
	
