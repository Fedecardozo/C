#include<stdio.h>

struct Est_Notas{
	float nota1;
	float nota2;
	float nota3;
};

struct Est_Alumno{
	char nombre[20];
	char sexo;
	int edad;
	struct Est_Notas notas;
};

int main(){
	struct Est_Alumno al1;
	float promedio;
	
	printf("Nombre: "); gets(al1.nombre);
	printf("Sexo: ");scanf("%c", &al1.sexo);fflush(stdin);
	printf("Edad: ");scanf("%i", &al1.edad);
	printf("Nota 1: ");scanf("%f", &al1.notas.nota1);
	printf("Nota 2: ");scanf("%f", &al1.notas.nota2);
	printf("Nota 3: ");scanf("%f", &al1.notas.nota3);
	
	promedio=(al1.notas.nota1+al1.notas.nota2+al1.notas.nota3)/3;
	
	printf("\nNombre: %s", al1.nombre);
	printf("\nPromedio: %.2f", promedio);
	
	return 0;
	
	
}
