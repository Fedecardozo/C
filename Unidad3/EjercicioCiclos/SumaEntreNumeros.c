# include<stdio.h>

int main(){
	
	int num,num2,i=0,total=0;
	
	printf("Ingrese 2 numeros: ");
	scanf("%i", &num);
	scanf("%i", &num2);
	
	if(num2 < num){
		
		int aux = num;
		num = num2;
		num2 = aux;
		
	}
	
	for(i = num+1; i<num2; i++){
		
		total = total + i;
		
	}
	
	printf("La suma total es: %i", total);
	
}
