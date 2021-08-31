/* 18-	Escreva um programa que mostra todos os números pares de 2 até 50.
 (Utilize: while) */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	n=2;
	printf("Números pares de %d até 50",n);
	while (n <= 50){
		if(n % 2 ==0){
			printf("\nNúmero %d é par ", n);
		}
		
		n++;
	}
	getch();
	
	return 0;
}
