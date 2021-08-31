/* 5- Faça um programa que calcule a área de um trapézio e escreva sua área. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float B, b, h, a;
printf("Digite o valor da base maior ");
scanf("%f",&B);
printf("Digite o valor da base menor ");
scanf("%f",&b);
printf("Digite o valor da altura ");
scanf("%f",&h);
a=(B+b)*h/2;
printf("O valor da área do trapézio é %.2f",a);
	getch();
	return 0;
}
