# include <stdio.h>

int leerNum();
void orden(int n1, int n2, int n3);

int main(){
	
	/*Hacer un programa que muestre 3 números ordenados de menor a mayor, utilizando un procedimiento.*/
	
	int n1,n2,n3;
	
	n1 = leerNum();
	n2 = leerNum();
	n3 = leerNum();
	
	orden(n1,n2,n3);
	
}

int leerNum(){
	
	int num;
	
	printf("Ingrese numero: ");
	scanf("%i", &num);
	
	return num;
	
}
void orden(int n1,int n2, int n3){
	
	int vec[3] = {n1,n2,n3};
	int i=0,j=0;
	
	for(i = 0; i<2; i++){
		
		for(j=0; j<2; j++){
			
			if(vec[j] > vec[j+1]){
				
				int aux = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = aux;
				
			}
			
		}
		
	}
	
	printf("Numeros ordenados menor a mayor: ");
	
	for(i=0; i<3; i++){
		
		printf("%i, ", vec[i]);
		
	}
	
}
