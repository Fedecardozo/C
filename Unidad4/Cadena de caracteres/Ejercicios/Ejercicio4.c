
# include<stdio.h>
# include<conio.h>
# include<string.h>

int main(){
	
	/*4.Crear una cadena que tenga la siguiente frase: "Hola que tal", 
	luego crear otra cadena para preguntarle al usuario su nombre, por último,
	 añadir el nombre al final de la primera cadena y mostrar el mensaje completo 
	 "Hola que tal <nombre>".*/
	 
	/* char palabra[] = "Hola que tal ";
	 char nombre[20], concatenar[40];
	 
	 printf("Ingrese su nombre: ");
	 gets(nombre);
	 
	 strcpy(concatenar,palabra);
	 //strcat(concatenar,nombre);
	 strcat(palabra,nombre);
	 
	 printf("%s", palabra);*/
	 
	 //5.Hacer un programa que determine si una palabra es palíndroma.
	 
	/* char palabra[20],palabra2[20];
	 
	 printf("Ingrese palabra: ");
	 gets(palabra);
	 
	 strcpy(palabra2,palabra);
	 strrev(palabra2);
	 
	 if(strcmp(palabra,palabra2) == 0){
	 	
	 	printf("Si es palindroma");
	 	
	 }else{
	 	
	 	printf("No es palindroma");
	 	
	 }*/
	 
	 /*6.Convertir dos cadenasb de minúsculas a mayúsculas, compararlas y decir si son iguales o no.*/
	 
	 char palabra[20],palabra2[20];
	 
	 printf("Ingrese palabra: ");
	 gets(palabra);
	 printf("Ingrese segunda palabra: ");
	 gets(palabra2);
	 
	 strupr(palabra);
	 strupr(palabra2);
	 
	 if(strcmp(palabra,palabra2) == 0){
	 	
	 	printf("Son iguales");
	 	
	 }else{
	 	
	 	printf("No son iguales");
	 	
	 }
	 
	 getch();
	 
	 return 0;
	
}
