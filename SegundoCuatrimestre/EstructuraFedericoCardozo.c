
#include <stdio.h>
#include <stdlib.h>
# define TAM 3

/*Hacer una estructura llamada alumno, la cuál tendrá los siguientes miembros: nombre, edad, promedio. 
Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

struct notaEst{
	
	float notas[TAM];
	
};

struct alumno{
	
	char nombre[15];
	int edad;
	float promedio;
	struct notaEst nota;
	
}estudiante[TAM]; //Declaro las variables

int main(){
	
	int i;
	int j;
	
	for(i=0; i<TAM; i++){
		
		printf("Ingrese nombre del alumno: ");
		gets(estudiante[i].nombre);
		printf("Ingrese edad del alumno: ");
		scanf("%i", &estudiante[i].edad);
		
		for(j=0; j<TAM; j++){
			
			printf("Ingrese nota %i: ", j);
			scanf("%f", &estudiante[i].nota.notas[j]);
			
		}
		
		fflush(stdin);
		
		//estudiante[i].promedio = (estudiante[i].nota.nota1 + estudiante[i].nota.nota2 + estudiante[i].nota.nota3)/TAM;
	}
	
}


