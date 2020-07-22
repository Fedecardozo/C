
# include<stdio.h>
# include<conio.h>
# include<string.h>

int main(){
	
	/*1.Hacer un programa que pida al usuario que digite una cadena de caracteres,
	 luego verificar la longitud de la cadena y si ésta supera los 10 caracteres
	  mostrarla en pantalla, caso contrario no mostrarla*/
	
/*	char teclado[20];
	int longitud;
	
	printf("Ingrese una cadena: ");
	gets(teclado);
	
	longitud = strlen(teclado);
	
	if(longitud > 10){
		
		printf("La palabra es: %s", teclado);
		
	}else{
		
		printf("No supera los 10 caracteres");
		
	} */
	
	/*2.Pedir al usuario una cadena de caracteres,
	 almacenarla en una variable y copiar todo el contenido hacia otra variable.*/
	
	/*char palabra[20],palabra2[20];
	
	printf("Ingrese una cadena: ");
	gets(palabra);
	
	strcpy(palabra2,palabra);
	
	printf("Palabra1: %s \nPalabra2: %s",palabra,palabra2);*/ 
	
	/*3.Pedir al usuario que digite 2 cadenas de caracteres, e 
	indicar si ambas cadenas son iguales, 
	en caso de no serlo, indicar cuál es mayor alfabéticamente.*/
	
	char palabra[20],palabra2[20];
	
	printf("Ingrese una cadena: ");
	gets(palabra);
	printf("Ingrese siguiente cadena: ");
	gets(palabra2);
	
	if(strcmp(palabra,palabra2) == 0){
		
		printf("Son iguales");
		
	}else if(strcmp(palabra,palabra2) < 0){
		
		printf("La palabra1: %s va primera que la palabra2: %s",palabra,palabra2);
		
	}else{
		
		printf("La palabra2: %s va primera que la palabra1: %s",palabra2,palabra);
		
	}
	getch();
	return 0;
}
