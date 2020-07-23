
# include <stdio.h>

int main(){
	
	//8.Hacer un programa que, dadas 2 matrices de 3x3, calcule y muestre en pantalla el producto de las mismas.
	
	int mat1[3][3] = {1,2,5,
					  8,9,7,
					  5,12,11};
	int mat2[3][3] = {14,5,89,
					  4,7,8,
					  9,4,9};
	
	int i=0,j=0,por,sum=0,r=0;
	
	
	for(i=0;i<3;i++){
		
		printf("\n");
		
		for(j=0;j<3;j++){
			
			por = mat1[i][j] * mat2[j][i]; 
			sum = sum + por;
			
			printf("|%i|",mat2[j][i]);
	
		}
		
	}
	printf("\nMat1: ");
	for(i=0;i<3;i++){
		
		printf("\n");
		
		for(j=0;j<3;j++){
			
			por = mat1[i][j] * mat2[j][i]; 
			sum = sum + por;
			
			printf("|%i|",mat1[i][j]);
	
		}
		
	}
	
	/*for(i=0;i<9;i++){
		
		for(j=0;j<3;j++){
			
			por = mat1[r][j] * mat2[j][r]; 
			sum = sum + por;
			
			switch(i){
				
				case 2: r=0; break;
					
			}
			
			if(j == 2){
				
				printf("|%i| ",sum);
				sum = 0;
				r++;
				
			}
	
		}
		
	}*/
	
}
