
# include<stdio.h>

// Prototitopo
void paridad(int x);


int main(){
	
	int num;
	
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	paridad(num);
	
}

void paridad(int x){
	
	if(x%2 == 0){
		
		printf("El numero %i es par",x);
		
	}else{
		
		printf("El numero %i es impar",x);
		
	}
	
	
}
