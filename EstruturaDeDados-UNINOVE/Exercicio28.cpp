/*28) Crie um programa que leia uma quantidade de valores para um vetor de 
tamanho de posições definido pelo usuário e depois calcule a média dos 
valores acessando o vetor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int tamanho, i;
printf("Digite o tamanho do vetor ");
scanf("%d",&tamanho);
float vet[tamanho], media=0;
for(i=0;i<tamanho;i++){
	printf("Digite um número ");
	scanf("%f",&vet[i]);
	media=media+vet[i];
}
media=media/tamanho;
printf("A média é %.2f",media);
	getch();
	return 0;
}
