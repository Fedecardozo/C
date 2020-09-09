
#include<stdio.h>

void cambio(int peso, int *mil, int *quinientos, int *doscientos, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *dos, int *uno);

int main(){
	
	/*Hacer un procedimiento llamado cambio() que tenga un parámetro en número entero y 10 parámetros de referencia en número entero llamados mil, 
	quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos y uno, respectivamente.
	El procedimiento tiene que considerar el valor entero transmitido como una cantidad en pesos y
	convertir el valor en el número menor de billetes equivalentes.*/
	
	int valor;
	int m=0, q=0, dc=0, c=0, cin=0, vei=0, di=0, c5=0, d2=0, u1=0;
	
	printf("Ingrese total: ");
	scanf("%i", &valor);
	
	cambio(valor, &m, &q, &dc, &c, &cin, &vei, &di, &c5, &d2, &u1);

	printf("El vuelto en billetes de $1.000 son: %i",m);
	printf("\nEl vuelto en billetes de $500 son: %i",q);
	printf("\nEl vuelto en billetes de $200 son: %i",dc);
	printf("\nEl vuelto en billetes de $100 son: %i",c);
	printf("\nEl vuelto en billetes de $50 son: %i",cin);
	printf("\nEl vuelto en billetes de $20 son: %i",vei);
	printf("\nEl vuelto en billetes de $10 son: %i",di);
	printf("\nEl vuelto en billetes de $5 son: %i",c5);
	printf("\nEl vuelto en billetes de $2 son: %i",d2);
	printf("\nEl vuelto en billetes de $1 son: %i",u1);

	
}

void cambio(int peso, int *mil, int *quinientos, int *doscientos, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *dos, int *uno){
	
	int resto;
	
	*mil = peso/1000;
	resto = peso%1000;
	
	*quinientos = resto/500;
	resto = resto%500;
	
	*doscientos = resto/200;
	resto = resto%200;
	
	*cien = resto/100;
	resto = resto%100;
	
	*cincuenta = resto/50;
	resto = resto%50;
	
	*veinte = resto/20;
	resto = resto%20;
	
	*diez = resto/10;
	resto = resto%10;
	
	*cinco = resto/5;
	resto = resto%5;
	
	*dos = resto/2;
	resto = resto%2;
	
	*uno = resto;
	 
	
	
	
}


