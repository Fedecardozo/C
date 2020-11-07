
# include<stdio.h>
# define TAM 3

//1. Utilizando estructuras (registros), crear un programa que permita almacenar la siguiente información sobre carga de combustibles (ver ejemplo)
/*2-Realice el ingreso de la información de 50 cargas de combustible.

· Valide que el número de surtidor no sea menor a 1 ni mayor a 4, caso contrario no prosiga la entrada y siga pidiendo el número de surtidor correcto.

· El número de carga debe comenzar en 1 y ser correlativo.*/

struct combustible{
	
	int carga;
	char playero[20];
	int surtidor;
	char tipo[30];
	int litros;
	
}cargaCombustible[TAM];

int main(){
	
	int i;
	cargaCombustible[0].carga = 0;
	for(i=0; i<TAM; i++){
		
		printf("Ingrese nombre del playero: ");
		gets(cargaCombustible[i].playero);
		printf("Ingrese surtidor: ");
		scanf("%i", &cargaCombustible[i].surtidor);
		fflush(stdin);
		
		while(cargaCombustible[i].surtidor<1 || cargaCombustible[i].surtidor>4){
			
			printf("Error! Ingrese surtidor mayor a 1 y menor a 4: ");
			scanf("%i", &cargaCombustible[i].surtidor);
			fflush(stdin);		
			
		}
		
		printf("Ingrese tipo de combustible: ");
		gets(cargaCombustible[i].tipo);
		printf("Ingrese cantidad de litros: ");
		scanf("%i", &cargaCombustible[i].litros);
		fflush(stdin);
		
		cargaCombustible[0].carga++;
		
	}
	
	printf("Total de carga: %i",cargaCombustible[0].carga);
	
	return 0;
}
