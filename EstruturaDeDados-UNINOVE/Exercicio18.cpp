/* 18-	Escreva um programa que mostra todos os n�meros pares de 2 at� 50.
 (Utilize: while) */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	n=2;
	printf("N�meros pares de %d at� 50",n);
	while (n <= 50){
		if(n % 2 ==0){
			printf("\nN�mero %d � par ", n);
		}
		
		n++;
	}
	getch();
	
	return 0;
}
