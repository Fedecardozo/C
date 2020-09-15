
# include<stdio.h>

void burbujeo(int vector[], int x);
void imprimir(int vector[],int x);

int main(){
	
	int vec[] = {2,8,9,3,4};
	
	burbujeo(vec,5);
	imprimir(vec,5);
	
}

void burbujeo(int vector[], int x){
	
	int i=0,j=0;
	
	for(i=0;i<x-1;i++){
		
		for(j=0;j<x-1;j++){
			
			if(vector[j]>vector[j+1]){
				
				int aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
				
			}
			
		}
		
	}
	
}

void imprimir(int vector[],int x){
	
	int i=0;
	
	//Forma Ascendente
	printf("Forma ascendente:");
	for(i=0;i<x;i++){
		
		printf(" %i -",vector[i]);
		
	}
	//Forma Descendente
	printf("\n\nForma descendente:");
	for(i=x-1;i>=0;i--){
		
		printf(" %i -",vector[i]);
		
	}
	
}

