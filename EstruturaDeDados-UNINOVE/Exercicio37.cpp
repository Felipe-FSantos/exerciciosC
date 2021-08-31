/*37) Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 
elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas 
s da matriz. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	float vet[3], mat[3][3];
	
	for(int i=0;i<3;i++){
		printf("Digite 3 elementos");
		scanf("%f",&vet[i]);
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite os elementos da matriz: \n");
			scanf("%f",&mat[i][j]);
		}
	}
	
		printf("Matriz normal...\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%.2f\t",mat[i][j]);
		}
		printf("\n");
	}

	
	printf("MAtriz multiplicada pelo Vetor é...\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mat[i][j]=vet[i] * mat[i][j];
			printf("%.2f\t",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("");
	 getch();
	 return 0;
}
