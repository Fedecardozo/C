
# include<stdio.h>
# include<conio.h>
# include<string.h>

int main(){
	
	/*7.Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza con la letra A,
	 convertir su nombre a minúscula, caso contrario no convertirlo.*/
	 
	/* char nombre[20];
	 
	 printf("Ingrese su nombre en mayusculas: ");
	 gets(nombre);
	 
	 if(nombre[0] == 'A'){
	 	
	 	printf("minusculas: %s ", strlwr(nombre));
	 	
	 }else {
	 	
	 	printf("No empieza con A");
	 	
	 }*/
	 
	/*8.Pedir al usuario dos cadenas de caracteres de números, uno entero y otro real. 
	Convertirlos a sus respectivos valores, sumarlos y mostrar el resultado.*/
	
	/*int num=0;
	float real=0,total;
	char palabra[5],palabra2[]="25.50";
	
	printf("Ingrese numero entero: ");
	gets(palabra);

	printf("Ingrese numero flotante: ");
	gets(palabra2);

	num = atoi(palabra);
	real = atof(palabra2);
	
	printf("\n %i \n %f",num,real);
	
	total = num + real;
	
	printf("El total es: %2.f",total);*/
	
	/*9.Realice un programa que lea una cadena de caracteres de la entrada estándar
	 y muestre en la salida 
	estándar cuantas ocurrencias de cada vocal existen en la cadena.*/
	
	char palabra[20];
	int h=0,longitud;
	int a=0,e=0,i=0,o=0,u=0;
	
	printf("Ingrese una palabra: ");
	gets(palabra);
	
	longitud = strlen(palabra);
	strlwr(palabra);
	
	for(h=0; h<longitud; h++){
		
		switch(palabra[h]){
			
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
			/*case 'A': cont++; break;
			case 'E': cont++; break;
			case 'I': cont++; break;
			case 'O': cont++; break;
			case 'U': cont++; break;*/
			
		}
		
	}
	
	printf("Total de letras 'a': %i" ,a);
	printf("Total de letras 'e': %i" ,e);
	printf("Total de letras 'i': %i" ,i);
	printf("Total de letras 'o': %i" ,o);
	printf("Total de letras 'u': %i" ,u);
	
}
