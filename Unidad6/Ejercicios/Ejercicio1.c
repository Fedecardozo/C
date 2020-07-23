
# include <stdio.h>

int main(){
	
	//1.Declarar una matriz de 3x3 y llenarla con datos pedidos al usuario.
	
	int matriz[3][3];
	int i=0,j=0,pos=0,num;
	
	printf("Ingrese 9 numeros hasta llenar la matriz: \n");
	
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			
			pos++;
			printf("Numero %i: ",pos);
			scanf("%i", &num);
			matriz[i][j] = num;
			
		}
		
	}
	
	printf("\nMatriz llena!\n");
	
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			
			printf("\nPosicion [%i][%i] = %i",i,j, matriz[i][j]);
			
		}
		
	}
	
	
}
