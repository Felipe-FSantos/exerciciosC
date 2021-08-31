/*6- Faça um programa que calcule o volume de uma esfera e escreva seu volume. 
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>
# define PI 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
float v,r;
printf("Digite o valor do raio ");
scanf("%f",&r);
v=(4*PI*pow(r,3))/3;
//pow(base,expoente) => potência
printf("O volume da esfera é %.2f",v);
	getch();
	return 0;
}
