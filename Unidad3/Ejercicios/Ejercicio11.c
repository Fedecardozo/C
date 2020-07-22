
# include <stdio.h> 

int main (){
	
	/*11.Escribir un programa que
	 calcule la serie de Fibonacci hasta el número n (ingresado por teclado)*/
	 
	/* int num, i=0,a=0,b=1,c; 
	 
	 printf("Ingrese un numero: ");
	 scanf("%i", &num);
	 
	 printf("1, ");
	 
	 for(i = 1; i < num; i++){
	 	
	 	c = a + b;
	 	
		printf("%i, ", c);
		
		a = b;
		b = c;
		
	 }*/
	 
	 /*12.	En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
		"	Alumnos que aprobaron todos los exámenes
		"	Alumnos que aprobaron por lo menos un examen
		"	Alumnos que aprobaron únicamente el último examen*/
		
		
		int nota, i=0,contApro=0,cont=0,contUlti=0,j=0;
		
		for(i = 0; i<3; i++){
			
			int cont1=0,cont2=0,cont3=0;
			printf("Ingrese las 3 notas del alumno %i: ",(i+1));
			
			for(j = 0; j<3; j++){
				
				scanf("%i", &nota);
				
				if(nota > 6 && j == 0){
					
					cont1++;
					
				}else if(nota >6 && j==1){
					
					cont2++;
					
				}else if(nota >6 && j==2){
					
					cont3++;
					
				}
				
			}
			
			if(cont1 == 1 && cont2 == 1 && cont3 == 1){
				
				contApro++;
				
			}else if(cont1 ==1 || cont2 == 1){
				
				cont++;
				
			}else if(cont3 == 1){
				
				contUlti++;
				
			}
			
			
		}
		
		printf("Los que aprobaron todo son: %i", contApro);
		printf("\nLos que aprobaron al menos 1 son: %i",cont);
		printf("\nLos que aprobaron solo el ultimo son: %i",contUlti);
		
	//	printf("\n contador1 %i", cont1);
}
