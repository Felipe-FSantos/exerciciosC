/*40) Criar um algoritmo que leia os elementos de uma matriz inteira de 3 x 3 e 
imprimir todos os elementos, exceto os elementos da diagonal principal.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite um número: ");
			scanf("%d",&mat[i][j]);
		}
	}
	
	
		printf("A Matriz é: \n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				printf("[%d]",mat[i][j]);
		}
		printf("\n");
	}
	
	
		printf("A matriz sem a diagonal principal é:\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i != j){
				printf("[%d]",mat[i][j]);
			}
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
