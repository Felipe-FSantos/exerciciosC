//7- Construa um algoritmo para calcular as ra�zes de uma equa��o do 2� grau (ax2 + bx + c) sendo que os valores a, b e c s�o fornecidos pelo usu�rio.




/* OBS: raiz quadrada = sqrt(delta)
pot�ncia = pow(base, expoente)
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
float a, b, c, x1, x2, x3, delta;
printf("Digite o valor de A:");
scanf("%f",&a);

printf("Digite o valor de B:");
scanf("%f",&b);

printf("Digite o valor de C:");
scanf("%f",&c);

delta=pow(b,2)-4*a*c;

x1=(-b-sqrt(delta)) /2*a;
x2=(-b+sqrt(delta)) /2*a;
printf("As ra�zes s�o x1= %.2f e x2= %.2f",x1,x2);

	getch();
	return 0;

}

