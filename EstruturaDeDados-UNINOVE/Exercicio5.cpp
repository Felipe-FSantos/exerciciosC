/* 5- Fa�a um programa que calcule a �rea de um trap�zio e escreva sua �rea. */

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
printf("O valor da �rea do trap�zio � %.2f",a);
	getch();
	return 0;
}
