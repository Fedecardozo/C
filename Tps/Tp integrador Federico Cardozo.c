
# include <stdio.h>
# include <stdlib.h> 

int main(){
	
	int num, num2,i=0,div=0,por=0,resultado=0;
	
	printf("Ingrese el multiplicando: ");
	scanf("%i", &num);
	printf("Ingrese el multiplicador: ");
	scanf("%i", &num2);
	
	while(div>1 || i==0){
		
		if(i==0){
			
			div = num;
			por = num2;
			
			if(div%2 != 0){
			
				resultado = resultado + por;
			
			}
			
		}else{
			
			div = div/2;
			por = por*2;
			
			if(div%2 != 0){
			
				resultado = resultado + por;
			
			}

		}
		
		i++;
		
	}
	
	printf("El resultado es: %i", resultado);
	
}
