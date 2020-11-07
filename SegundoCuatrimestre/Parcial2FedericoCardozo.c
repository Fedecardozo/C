
# include<stdio.h>
# define TAM 3

//1. Utilizando estructuras (registros), crear un programa que permita almacenar la siguiente información sobre carga de combustibles (ver ejemplo)
/*2-Realice el ingreso de la información de 50 cargas de combustible.

· Valide que el número de surtidor no sea menor a 1 ni mayor a 4, caso contrario no prosiga la entrada y siga pidiendo el número de surtidor correcto.

· El número de carga debe comenzar en 1 y ser correlativo.*/

/*3- Diseñe una función que reciba el número de surtidor y que devuelva el total de litros despachados de “Diesel Premium”*/

void dieselPremium(int surtidor, int litros);
//int dieselSurtidor(int surtidor);

struct combustible{
	
	int carga;
	char playero[20];
	int surtidor;
	int tipo;
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
		
		printf("Tipo de combustible: \n 1)Nafta\n 2)Nafta super\n 3)Diesel\n 4)Diesel Premium\nIngrese opcion:");
		scanf("%i", &cargaCombustible[i].tipo);
		
		while(cargaCombustible[i].tipo<1 || cargaCombustible[i].tipo>4){
			
			printf("Error! Ingrese opcion de tipo de combustible mayor a 1 y menor a 4: ");
			scanf("%i", &cargaCombustible[i].tipo);
			fflush(stdin);		
			
		}
		
		printf("Ingrese cantidad de litros: ");
		scanf("%i", &cargaCombustible[i].litros);
		fflush(stdin);
		
		if(cargaCombustible[i].tipo == 4){
			
			dieselPremium(cargaCombustible[i].surtidor,cargaCombustible[i].litros);	
			
		}
		
		cargaCombustible[0].carga++;
		
	}
	
	printf("Total de carga: %i",cargaCombustible[0].carga);
	
	return 0;
}

void dieselPremium(int surtidor, int litros){
	
	int diesel1=0,diesel2=0,diesel3=0,diesel4=0;
	
	switch(surtidor){
		
		case 1: diesel1 = diesel1 + litros; break;
		case 2: diesel2 = diesel2 + litros; break;
		case 3: diesel3 = diesel3 + litros; break;
		case 4: diesel4 = diesel4 + litros; break;
		
	}

	
}
/*int dieselSurtidor(int surtidor){
	
		switch(surtidor){
		
		case 1: return diesel1; break;
		case 2: return diesel2; break;
		case 3: return diesel3; break;
		case 4: return diesel4; break;
		default: return 0; break;
	}
	
	
}*/


