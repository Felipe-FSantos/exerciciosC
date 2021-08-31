/*20- Faça um programa que receba 10 números inteiros positivos quaisquer, 
calcule e mostre na tela o dobro dos valores pertencentes ao intervalo: 
5<x<20. (do...while)  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, dobro, cont = 1;
	printf("Digite 10 numeros e será revelado o dobro dele...\n ");
	
	do{
		printf("\t\nDigite o %dº número inteiro positivo: ",cont);
		scanf("%d",&n);
		if(n > 5 && n < 20){
			dobro = 2 * n;
			printf("O dobro de %d é: %d.",n,dobro);
		}
		cont++;
	} while (cont <= 10);
	getch();
	return 0;
}
