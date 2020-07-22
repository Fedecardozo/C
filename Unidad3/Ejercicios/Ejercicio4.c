
# include <stdio.h>

int main (){
	
	/*4.Escriba un programa que tome cada 4 horas la temperatura exterior, 
	durante un período de 24 horas. Es decir, se deben leer 6 temperaturas. 
	Calcular la temperatura media del día, la temperatura más alta y la más baja.*/
	
	float temperatura,media,baja,alta,media2;
	int i = 0;
	
	for(i = 0 ; i < 6; i++){
		
		printf("Ingrese temperatura: ");
		scanf("%f", &temperatura);
		
		if(i == 0){
			
			baja = temperatura;
			media = temperatura;
			alta = temperatura;	
			
		}else{
			
			
			if(temperatura < baja){
				
				baja = temperatura;
				
			}
			if(temperatura > alta){
				
				alta = temperatura;
				
			}
			if(media<temperatura){
				
				media2 = media;
				
			}
			
		}
		
		media = temperatura;
		
	}
	
	printf("La temperatura mas baja es: %2.f \n", baja);
	printf("La temperatura media es: %2.f \n", media2);
	printf("La temperatura mas alta es: %2.f", alta);
	
}
