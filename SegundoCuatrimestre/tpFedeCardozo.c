
# include <stdio.h>

int recursiva(int x);

int main(){
	
	/*Realice una función recursiva que sume los primeros n números positivos,
	 teniendo en cuenta que suma(n) = 1 (si n = 1) y que suma(n) = n + suma(n-1) (si n > 1)*/
	 
	 int num,res;
	 
	 printf("Ingrese un numero: ");
	 scanf("%i", &num);
	 
	 res = recursiva(num);
	
	printf("El resultado es: %i", res);
	
}

int recursiva(int x){
	
	int suma;
	
	if(x > 1){
		
		printf("%i + ",x);
		suma = x + recursiva(x-1);
		
	}else{
		
		suma = 1;
		printf("%i\n",suma);
		
	}
	
	return suma;
	
	
}
