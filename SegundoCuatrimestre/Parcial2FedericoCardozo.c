
# include<stdio.h>
# define TAM 3

//1. Utilizando estructuras (registros), crear un programa que permita almacenar la siguiente información sobre carga de combustibles (ver ejemplo)
/*2-Realice el ingreso de la información de 50 cargas de combustible.

· Valide que el número de surtidor no sea menor a 1 ni mayor a 4, caso contrario no prosiga la entrada y siga pidiendo el número de surtidor correcto.

· El número de carga debe comenzar en 1 y ser correlativo.*/

/*3- Diseñe una función que reciba el número de surtidor y que devuelva el total de litros despachados de “Diesel Premium”*/

void dieselPremium(int surtidor, int litros);
int acuDiesel = 0,acuDiesel2 = 0, acuDiesel3 = 0, acuDiesel4 = 0;

struct combustible{
	
	int carga;
	char playero[20];
	int surtidor;
	int tipo;
	int litros;
	
}cargaCombustible[TAM];

int main(){
	
	int i,num;
	cargaCombustible[0].carga = 0;
	for(i=0; i<TAM; i++){
		
		printf("Ingrese nombre del playero N-%i: ",(i+1));
		gets(cargaCombustible[i].playero);
		
		printf("Ingrese numero de surtidor: ");
		scanf("%i", &cargaCombustible[i].surtidor);
		fflush(stdin);
		
		while(cargaCombustible[i].surtidor<1 || cargaCombustible[i].surtidor>4){
			
			printf("Error! Ingrese surtidor mayor a 1 y menor a 4: ");
			scanf("%i", &cargaCombustible[i].surtidor);
			fflush(stdin);		
			
		}
		
		printf("Tipo de combustible: \n 1)Nafta\n 2)Nafta Premium\n 3)Diesel\n 4)Diesel Premium\nIngrese opcion: ");
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
		printf("\n          ***         \n\n");
	}
	printf("**************************************\n\n");
	printf("Quiere saber la cantidad de cargas? \n Opcion 1-Si \n Opcion 2-No \nIngrese opcion: ");
	scanf("%i", &num);
	switch(num){
		
		case 1: 
				printf("\nIngrese surtidor: ");
				scanf("%i", &num);
				printf("\nEl surtidor %i tiene un total de Diesel Premium de %i Litros",num, dieselSurtidor(num));
				break;
		case 2: printf("Muchas gracias, Hasta luego!"); break;
		default: printf("No existe esa opcion, Hasta luego!"); break;
		
	}
		
	
	
	
	
	return 0;
}

void dieselPremium(int surtidor, int litros){
	
	
	switch(surtidor){
		
		case 1: acuDiesel = acuDiesel + litros; break;
		case 2: acuDiesel2 = acuDiesel2 + litros; break;
		case 3: acuDiesel3 = acuDiesel3 + litros; break;
		case 4: acuDiesel4 = acuDiesel4 + litros; break;
		
	}
	
}
int dieselSurtidor(int surtidor){
	
		switch(surtidor){
		
		case 1: return acuDiesel; break;
		case 2: return acuDiesel2; break;
		case 3: return acuDiesel3; break;
		case 4: return acuDiesel4; break;
		default: return 0; break;
	}
	
	
}


