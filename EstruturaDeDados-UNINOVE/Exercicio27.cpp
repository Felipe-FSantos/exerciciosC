/*27) Crie um programa que leia tr�s valores para um vetor de tr�s posi��es 
e depois calcule a m�dia dos valores acessando o vetor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[3], soma=0, media;
	int i;
	for(i=0;i<3;i++){
		printf("Digite um n�mero ");
		scanf("%f",&vet[i]);
		soma=soma+vet[i];
	}
	media=soma/3;
	printf("A m�dia � %.2f",media);
	getch();
	return 0;
}

