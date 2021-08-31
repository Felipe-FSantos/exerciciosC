/*27) Crie um programa que leia três valores para um vetor de três posições 
e depois calcule a média dos valores acessando o vetor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[3], soma=0, media;
	int i;
	for(i=0;i<3;i++){
		printf("Digite um número ");
		scanf("%f",&vet[i]);
		soma=soma+vet[i];
	}
	media=soma/3;
	printf("A média é %.2f",media);
	getch();
	return 0;
}

