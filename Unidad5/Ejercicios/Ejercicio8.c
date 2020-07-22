
# include <stdio.h>

int main(){

	//1.Hacer un programa que lea 5 números en un arreglo y los copie a otro arreglo, multiplicados por 2.
	
	int vec[5] = {5,4,8,9,7};
	int vec2[5];
	int i = 0;
	
	printf("Arreglo 2: ");
	
	for(i=0; i<5; i++){
		
		vec2[i] = vec[i] * 2;
		
		printf("%i - ", vec2[i]);
		
	}

}
