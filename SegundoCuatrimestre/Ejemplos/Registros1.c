#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct corredor{
	char nombre[25];
	int edad;
	char sexo;
	char club[30];
	char categoria[15];
};

int main(){
	struct corredor c1;
	
	//Cargar datos en la variable tipo "registro"
	printf("Ingrese nombre del corredor: ");
	gets(c1.nombre);
	printf("Ingrese la edad: ");
	scanf("%i", &c1.edad);
	fflush(stdin);
	printf("Ingrese M si es masculino o F si es femenino: ");
	scanf("%c", &c1.sexo);
	fflush(stdin);
	while(c1.sexo!='M'&&c1.sexo!='F'){
		printf("Ingrese nuevamente M o F: ");
		scanf("%c", &c1.sexo);
		fflush(stdin);
	}
	printf("Ingrese el club del corredor: ");
	gets(c1.club);
	
	//Calculo la categoria
	if(c1.edad<=18){
		strcpy(c1.categoria,"Juvenil");
	}
	else{
		if(c1.edad>18 && c1.edad<=40){
			strcpy(c1.categoria,"Senior");
		}
		else{
			strcpy(c1.categoria, "Veterano");
		}
	}
	
	//Imprimo datos del corredor
	printf("\nDatos del corredor.");
	printf("\nNombre: %s", c1.nombre);
	printf("\nEdad: %i", c1.edad);
	printf("\nSexo: %c", c1.sexo);
	printf("\nClub: %s", c1.club);
	printf("\nCategoria: %s", c1.categoria);
	
	return 0;
}
