
# include <stdio.h>
# include <string.h>

int main(){
	
	/*7.Realiza un programa que defina dos vectores de caracteres y despu�s almacene el contenido de ambos vectores en un nuevo vector, situando en primer 
	lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida est�ndar.*/

	
	char vector1[4] = {'F','e','d','e'};
	char vector2[8] = {'C','a','r','d','o','z','o','\0'};
	
	//fflush(stdin);
	
	printf("Vector 1: %s",vector1);	
	printf("\nVector 2: %s",vector2);
	
	printf("\nUnion vector 1 y 2: %s %s",vector1,vector2);
	
}
