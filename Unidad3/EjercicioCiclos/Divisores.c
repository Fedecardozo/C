
# include<stdio.h>

int main(){

	int num,i=0;

	printf("Ingrese numero: ");
	scanf("%i", &num);

	for(i = 0; i<num; i++){
		
		if(num%i == 0){
			
			printf("%i ", i);
			
		}
		
	}
	
	printf("/n");
	
}
