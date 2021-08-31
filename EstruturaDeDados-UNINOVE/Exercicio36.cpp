/* 36) Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando 
for, multiplica cada elemento por 5 e imprime o resultado. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			printf("Digite %d elementos...",i+1);
			scanf("%f",&n[i][j]);
		}
	}
	
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
		printf("%2.f\t",n[i][j]*5);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
