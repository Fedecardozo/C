
# include <stdio.h>
# include <time.h>

int main(){
	
	/*4.Definir una matriz preguntando al usuario el número de filas y de columnas, 
	llenarla con números aleatorios, copiar el contenido a otra matriz y mostrar esta última en pantalla.*/
	
	int fila,columna,ale,i=0,j=0;
	
	printf("De cuanto quiere que sea la matriz? ");
	printf("\nIngrese fila: ");
	scanf("%i" ,&fila);
	printf("Ingrese columna: ");
	scanf("%i" ,&columna);
	
	int matriz[fila][columna];
	
	printf("\nMatriz aleatoria!!");
	
	for(i=0; i<fila; i++){
		
		printf("\n");
		
		for(j=0; j<columna; j++){
			
			//srand(time(NULL));
			ale = rand()%57;
			matriz[i][j] = ale;
			
			printf("|%i|", matriz[i][j]);
			
		}
		
	}
	
	
}
