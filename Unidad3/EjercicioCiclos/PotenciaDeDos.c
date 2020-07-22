
# include<stdio.h>

int main(){
	
	int num,i=0,potencia=1;
	
	printf("Ingrese numero: ");
	scanf("%i", &num);
	
	for(i = 0; i<=num; i++){
		
		printf("%i ", potencia);
		
		potencia = potencia * 2;
		
		
	}
	
	printf("\n");
	
}
