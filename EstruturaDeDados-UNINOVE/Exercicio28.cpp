/*28) Crie um programa que leia uma quantidade de valores para um vetor de 
tamanho de posi��es definido pelo usu�rio e depois calcule a m�dia dos 
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
	printf("Digite um n�mero ");
	scanf("%f",&vet[i]);
	media=media+vet[i];
}
media=media/tamanho;
printf("A m�dia � %.2f",media);
	getch();
	return 0;
}
