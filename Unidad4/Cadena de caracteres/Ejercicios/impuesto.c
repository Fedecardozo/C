
# include<stdio.h>

int main(){
	
	float num,impuesto,convertor,envio;
	
	printf("Ingrese importe: ");
	scanf("%f", &num);
	printf("Ingrese envio: ");
	scanf("%f", &envio);
	
	convertor = (num+envio) * 79.16;
	
	impuesto = (convertor * 30)/100;
	
	printf("El importe total es: %2.f" , (convertor + impuesto));
	
	
}
