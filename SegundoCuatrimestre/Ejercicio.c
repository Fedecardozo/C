
# include <stdio.h>

/*Escriba un programa que pida al usuario que ingrese varios valores enteros, que pueden ser positivos o negativos.
 Cuando se ingrese un cero, el programa debe terminar y mostrar un gráfico de cuántos valores positivos y negativos fueron ingresados:*/
 
 int main(){
 	
 	int num,i=0,j=0;
 	char pos[10],neg[10];
 	
 	printf("Ingrese varios valores, termine con cero: \n");
 	
 	do{
 		
 		scanf("%i", &num);
 		
 		if(num>0){
 			
 			pos[i] = '*';
 			i++;
 			
		 }else if(num<0){
		 	
		 	neg[j] = '*';
		 	j++;
		 }
		 
 		
 		
	 }while(num != 0);
 	
 	printf("\nPositivos: %s", pos);
 	printf("\nNegativos: %s", neg);
 	
 	
 }
