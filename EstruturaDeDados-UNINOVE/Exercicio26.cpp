/* 26)Fa�a um programa que leia uma sequ�ncia de 5 n�meros e exiba-os em ordem 
inversa. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float vet[5];
int i;
for(i=0;i<5;i++){
	printf("Digite um n�mero ");
	scanf("%f",&vet[i]);
}
printf("\n\nExibi��o do vetor na forma inversa da digita��o \n\n");
for(i=4;i>=0;i--){
	printf("%.1f\t",vet[i]);
}
	getch();
	return 0;
}

