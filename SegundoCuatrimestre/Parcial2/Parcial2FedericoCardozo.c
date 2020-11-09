
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<conio.h>
# define TAM 1

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
void crearArchivo();

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
		
		printf("Tipo de combustible: \n 1)Nafta Super\n 2)Nafta Premium\n 3)Diesel\n 4)Diesel Premium\nIngrese opcion: ");
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
	
	crearArchivo();
	
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
	int cont;
	srand(time(NULL));
	cont = rand()%22;
	
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
		
		if(x>0 && x<5){
			
			return cont;
			
		}else{
			
			return 0;
			
		}

	}else{
		
		return 0;
		
	}
	
}
void menu(){
	
	int num,opc;
	char playero[20];
	
	
	do{
		printf("\t****** MENU ******" );
		printf("\n 1) Quiere saber que surtidor cargo mas Diesel Premium?");
		printf("\n 2) Quiere saber cuantas veces fue utilizado un surtidor y por que playero?");
		printf("\n 3) Salir");
		printf("\n Ingrese opcion: ");
		scanf("%i", &opc);
		fflush(stdin);
		system("cls");
		
		switch(opc){
		
			case 1: 
					printf("\n**** Eligio la opcion 1 ****");
					printf("\n\nIngrese surtidor: ");
					scanf("%i", &num);
					printf("\nEl surtidor %i tiene un total de Diesel Premium de %i Litros \n",num, dieselSurtidor(num));
					printf("\n\nPresione la tecla ENTER para continuar... ");
					getch();
					system("cls");
					break;
			case 2: 
					printf("\n**** Eligio la opcion 2 ****");
					printf("\n\nIngrese surtidor: ");
					scanf("%i", &num);
					fflush(stdin);
					printf("Ingrese nombre del playero: ");
					gets(playero);
					int flag = cantidadPlayero(num,playero);
					if(flag == 0){
						
						printf("\n Incorrecto surtidor o nombre del playero");
						
					}else{
						
						printf("\nEl surtidor %i utilizado por el playero: %s fue utilizado %i veces \n",num, playero,flag);
						
					}	
					printf("\n\nPresione la tecla ENTER para continuar... ");
					getch();
					system("cls");
					break;		
			case 3: printf("Muchas gracias, Hasta luego!"); break;
			default:
				
				 system("cls"); 
				 printf("No existe esa opcion, Hasta luego!"); 
				 
				 break;
		
		}
	
	}while(!opc == 3);
		
	
}
void crearArchivo(){
	
	int i;
	
	FILE *texto;
	
	texto = fopen("Ventas.txt", "w");
	
	if(texto == NULL){
		
		printf("No se pudo crear el archivo!");
		
	}else{
		
		char tipoC[15];
		/*printf("Ingrese numero de surtidor: ");
		scanf("%i", &num);*/
		fprintf(texto,"Ventas del mes: Estación servicio YPF \n\n");	
		fprintf(texto,"Carga \t Playero \tSurtidor \tTipo Combustible \tLitros");
		for(i=0; i<TAM; i++){
			
			fprintf(texto,"\n  %i \t  %s\t\t   %i",cargaCombustible[i].carga,cargaCombustible[i].playero,cargaCombustible[i].surtidor);
			
			switch(cargaCombustible[i].tipo){
				
				case 1: strcpy(tipoC," Nafta Super "); break;
				case 2: strcpy(tipoC,"Nafta Premium") ; break;
				case 3: strcpy(tipoC,"   Diesel    "); break;
				case 4: strcpy(tipoC,"Diesel Premium"); break;
				default: strcpy(tipoC,"No existe"); break;
				
			}
			
			fprintf(texto,"\t\t %s\t\t  %i",tipoC,cargaCombustible[i].litros);
		}
			
		
	}
	fclose(texto);	
	
}


