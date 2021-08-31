/*2- Faça um programa que leia dois números inteiros e exiba o resto da divisão do 
primeiro pelo segundo. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2, resto;
printf ("Digite um número inteiro ");
scanf("%d",&n1);
printf ("Digite um número inteiro ");
scanf("%d",&n2);
resto=n1%n2;
printf("O resto da divisão entre %d e %d é %d.",n1, n2,resto);
	getch();
	return 0;
}
