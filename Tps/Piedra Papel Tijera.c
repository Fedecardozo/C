
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num,maquina,contJug=0, contMaq=0;
	
	//Piedra papel o tijera.
	
	//Integrantes: MRCAICH  PEJOVICH ANTONIO DAVID y FEDERICO CARDOZO. 
	
	do{
		
		srand(time(NULL));
		maquina = rand()%3;
		
		printf("Juega Usted: ");
		printf("\n 0 = Piedra\n 1 = Papel\n 2 = Tijera");
		printf("\nHaga su eleccion: ");	
		scanf("%i", &num);
		
		printf("Jugador: ");
		
		switch(num){
			
			case 0: printf("Piedra"); break;
			case 1: printf("Papel"); break;
			case 2: printf("Tijera"); break;
			default: printf("Numero incorrecto"); break;
			
		}
		
		printf("\nMaquina: ");
		
		switch(maquina){
			
			case 0: printf("Piedra"); break;
			case 1: printf("Papel"); break;
			case 2: printf("Tijera"); break;
			
		}
		
		if(num==maquina){
			
			printf("\n%i - %i",contJug,contMaq);
			
		}else{
			
			if((num==0 && maquina==1) || (num==1 && maquina==2)|| (num==2 && maquina==0)){
				
				contMaq++;
				
				printf("\n%i - %i",contJug,contMaq);
				
			}
			if((num==0 && maquina==2)|| (num==1 && maquina==0)|| (num==2 && maquina==1)){
				
				contJug++;
				
				printf("\n%i - %i",contJug,contMaq);
				
			}
		
		}
	
		if(contMaq==3){
			
			printf("\nMaquina es la ganadora! ");
			
		}else if(contJug == 3){
			
			printf("\nJugador es el ganador!");
			
		}
		printf("\n\n");
	
	}while(contJug != 3 && contMaq !=3);
	
}
