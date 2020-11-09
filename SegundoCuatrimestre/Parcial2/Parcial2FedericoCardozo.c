
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<conio.h>
# define TAM 3

//1. Utilizando estructuras (registros), crear un programa que permita almacenar la siguiente información sobre carga de combustibles (ver ejemplo)
/*2-Realice el ingreso de la información de 50 cargas de combustible.

· Valide que el número de surtidor no sea menor a 1 ni mayor a 4, caso contrario no prosiga la entrada y siga pidiendo el número de surtidor correcto.

· El número de carga debe comenzar en 1 y ser correlativo.*/

/*3- Diseñe una función que reciba el número de surtidor y que devuelva el total de litros despachados de “Diesel Premium”*/

//4- A través de una subrutina informar cuántas veces fue utilizado un determinado surtidor 
// por un determinado playero (estos datos deben ser suministrados como parámetros)

// 5- Generar un archivo de texto, llamado "Ventas.txt" que tenga la siguiente estructura:

void dieselPremium(int surtidor, int litros);
void menu();
int cantidadPlayero(int x, char nombre[20]);

// Variables globales para acumular el diesel premium
int acuDiesel = 0,acuDiesel2 = 0, acuDiesel3 = 0, acuDiesel4 = 0;

struct combustible{
	
	int carga;
	char playero[20];
	int surtidor;
	int tipo;
	int litros;
	
}cargaCombustible[TAM];

int main(){
	
	int i;

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
		
		cargaCombustible[i].carga = i+1;
		printf("\n          ***         \n\n");
	}
	system("cls");
	
	menu();
		

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
int cantidadPlayero(int x, char nombre[20]){
	
	// Variables con numeros ficticioso para hacer el punto 4
	int cont1 = 15, cont2 = 10, cont3 = 23, cont4 = 8;
	
	int i,flag=0;
	char auxNombre [20];
	strcpy(auxNombre,nombre);
	strupr(auxNombre);
	
	for(i=0; i<TAM; i++){
		
		char auxString[20];
		strcpy(auxString,cargaCombustible[i].playero);
		strupr(auxString);
		
		if(strcmp(auxNombre,auxString) == 0){
			
			flag = 1;
			i = TAM;
			
		}
		
	}
	
	if( flag == 1){
		
		switch(x){
				
			case 1: return cont1; break;
			case 2: return cont2; break;
			case 3: return cont3; break;
			case 4: return cont4; break;
			default: return 0; break;
				
		}
	}else{
		
		return 0;
		
	}
	
}
void menu(){
	
	int num;
	char playero[20];
	
	printf("\t****** MENU ******" );
	printf("\n 1) Quiere saber que suritdor cargo mas Diesel Premium?");
	printf("\n 2) Quiere saber cuantas veces fue utilizado un surtidor y por que playero?");
	printf("\n 3) Salir");
	printf("\n Ingrese opcion: ");
	scanf("%i", &num);
	fflush(stdin);
	
	switch(num){
		
		case 1: 
				printf("\n**** Eligio la opcion 1 ****");
				printf("\nIngrese surtidor: ");
				scanf("%i", &num);
				printf("\nEl surtidor %i tiene un total de Diesel Premium de %i Litros",num, dieselSurtidor(num));
				break;
		case 2: 
				printf("\n**** Eligio la opcion 2 ****");
				printf("\nIngrese surtidor: ");
				scanf("%i", &num);
				fflush(stdin);
				printf("Ingrese nombre del playero: ");
				gets(playero);
				int flag = cantidadPlayero(num,playero);
				if(flag == 0){
					
					printf("\n Incorrecto surtidor o nombre del playero");
					
				}else{
					
					printf("\nEl surtidor %i utilizado por el playero: %s fue utilizado %i",num, playero,flag);
					
				}	
				break;		
		case 3: printf("Muchas gracias, Hasta luego!"); break;
		default: printf("No existe esa opcion, Hasta luego!"); break;
		
	}
	
}


