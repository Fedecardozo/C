
# include <stdio.h>

int main(){
	
	//7.Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es cuadrada y si es igual a su transpuesta.
	
	int fila,columna,flag=0,i=0,j=0;
	
	printf("Ingrese fila: ");
	scanf("%i" ,&fila);
	printf("Ingrese columna: ");
	scanf("%i" ,&columna);
	
	
	if(fila != columna){
		
		printf("No es simetrica!");
		
	}else{
		
		int matriz[fila][columna];
		
		printf("\nIngrese numeros de la matriz: \n");
		
		for(i=0; i<fila; i++){
			
			for(j=0; j<columna; j++){
				
				printf("Posicion [%i][%i]: " ,i,j);
				scanf("%i", &matriz[i][j]);
				
			}
			
		}
		
		for(i=0; i<fila; i++){
			
			for(j=0; j<columna; j++){
				
				if(matriz[i][j] != matriz[j][i] && flag == 0){
					
					printf("\n ¡No es simetrica!");
					flag = 1;
					
				}
				
			}
			
		}
		
		if (flag == 0){
			
				printf("\n ¡Es simetrica!");
			
		}
		
		
	}
	
}
