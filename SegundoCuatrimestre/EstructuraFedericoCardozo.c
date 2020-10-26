
#include <stdio.h>
#include <stdlib.h>
# define TAM 3

/*Hacer una estructura llamada alumno, la cuál tendrá los siguientes miembros: nombre, edad, promedio. 
Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.*/

// Prototypo
void pedirDatos();
int mejorPromedio(float x[]);
void mostrarDatos();

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
	
	pedirDatos();
	mostrarDatos();
	
}

void pedirDatos(){
	
	int i,j;
	
	for(i=0; i<TAM; i++){
		
		// Inicio acumulador para que se reinicie y asi acumular las notas
		float acu = 0;
		
		printf("Ingrese nombre del alumno: ");
		gets(estudiante[i].nombre);
		printf("Ingrese edad del alumno: ");
		scanf("%i", &estudiante[i].edad);
		
		for(j=0; j<TAM; j++){
			
			printf("Ingrese nota %i: ", (j+1));
			scanf("%f", &estudiante[i].nota.notas[j]);
			//Acumulo las notas
			acu = acu + estudiante[i].nota.notas[j];
			
		}
		
		fflush(stdin);
		
		estudiante[i].promedio = acu/TAM;
	
	}
	
	
}

int mejorPromedio(float x[]){
	
	int i, mayor,indice;
	
	for(i=0; i<TAM; i++){
			
		
		if(i==0){
			
			mayor = x[i];
			indice = i;
			
		}else{
			
			if(x[i] > mayor){
			
				mayor = x[i];
				indice = i;
			
			}
			
		}
		
	}
	
	return indice;
	
}
void mostrarDatos(){
	
	int i,indice;
	float vecPromedio[TAM];
	
	for(i=0; i<TAM; i++){
		
		vecPromedio[i] = estudiante[i].promedio;
	
	}
	
	
	indice = mejorPromedio(vecPromedio);
	
	printf("\nEl nombre del alumno es: %s", estudiante[indice].nombre);
	printf("\nLa edad del alumno es: %i", estudiante[indice].edad);
	printf("\nEl promedio del alumno es: %.2f", estudiante[indice].promedio);
	
}

