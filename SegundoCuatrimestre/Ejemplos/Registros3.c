#include <stdio.h>

#define ELEMENTOS 3

struct estructura_amigo{
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
}amigo[ELEMENTOS];

int main(){
	int i;
	
	for(i=0; i<ELEMENTOS; i++){
		printf("\nDatos del amigo numero %i: \n", i+1);
		printf("Nombre: "); gets(amigo[i].nombre);
		printf("Apellido: ");gets(amigo[i].apellido);
		printf("Telefono: ");gets(amigo[i].telefono);
		printf("Edad: ");scanf("%i", &amigo[i].edad);
		fflush(stdin);
	}
	
	//Impresión de datos
	for(i=0; i<ELEMENTOS; i++){
		printf("\nMi amigo %s %s ",amigo[i].nombre, amigo[i].apellido);
		printf("\ntiene %i anios y su telefono es %s",amigo[i].edad,amigo[i].telefono);
		printf("\n");
	}
}
