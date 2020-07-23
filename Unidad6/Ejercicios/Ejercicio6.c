
# include <stdio.h>

int main(){
	
	//6.Realice un programa que sume dos matrices dadas de 3x3.
	
	int i=0,j=0;
	int mat1[3][3]={8,9,45,147,48,55,12,31,44};
	int mat2[3][3]={4,5,89,41,48,456,41,24,78};
	
	printf("Resultado matriz");
	
	for(i=0;i<3;i++){
		
		printf("\n");
		
		for(j=0;j<3;j++){
		
			
			printf("[%i]",(mat1[i][j] + mat2[i][j]));
				
			
		}
		
	}
	
}
