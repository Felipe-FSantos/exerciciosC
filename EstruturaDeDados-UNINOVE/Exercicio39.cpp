/* 39) Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 
e imprimir os elementos da diagonal principal.
 */
# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat[4][4];
	
	printf("Digite os numeros da matriz 4 X 4\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Digite um número: ");
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("A matriz é\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			printf("[%d]\t",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Os numeros da diagonal principal é: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				printf("[%d]\t",mat[i][j]);
			}
			
		}
		printf("\n");
	}
		
	getch();
	return 0;
}
