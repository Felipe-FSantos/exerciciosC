/* 26)Faça um programa que leia uma sequência de 5 números e exiba-os em ordem 
inversa. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float vet[5];
int i;
for(i=0;i<5;i++){
	printf("Digite um número ");
	scanf("%f",&vet[i]);
}
printf("\n\nExibição do vetor na forma inversa da digitação \n\n");
for(i=4;i>=0;i--){
	printf("%.1f\t",vet[i]);
}
	getch();
	return 0;
}

