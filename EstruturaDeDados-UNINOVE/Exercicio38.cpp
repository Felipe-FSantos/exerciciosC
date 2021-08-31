/*38) Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 
elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas 
coluna da matriz.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float vet[3],mat[3][3];
	
	printf("Digite 3 elementos do vetor: \n");
	for(int i=0;i<3;i++){
		printf("Digite o %d elemento",i+1);
		scanf("%f",&vet[i]);
	}
	printf("Digite os elementos da Matriz\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Digite um numero: ");
		scanf("%f",&mat[i][j]);
		}
	}
	
	printf("\n\nO vetor multiplicado pelas colunas da matriz é\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		mat[i][j] = mat[i][j] * vet[j];
		printf("%.2f\t",mat[i][j]);
		}
		printf("\n");
	}
	
	getch();
	return 0;
	
}
