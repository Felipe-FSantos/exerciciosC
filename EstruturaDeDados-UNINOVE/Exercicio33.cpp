/*33)Fa�a um programa que leia 15 dados do tipo inteiro, armazene-os em um vetor, 
calcule e mostre na tela os valores que est�o no intervalo 0<vetor[i]<10.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[15];
	
	for(int i=0;i<15;i++){
		printf("Digite um n�mero: ");
		scanf("%d",&vet[i]);
	}
	printf("\n\n Vetor com os n�meros que est�o no intervalo de 0 a 10\n");
	for(int j=0;j<15;j++){
		if(vet[j]>0 && vet[j]<=10){
		printf("%d\t",vet[j]);
		}
		
	}
	
	getch();
	return 0;
}
