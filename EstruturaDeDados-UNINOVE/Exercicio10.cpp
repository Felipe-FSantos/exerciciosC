/*10-Fazer um programa que calcule uma equa��o do 2� grau e determine 
se suas ra�zes s�o reais e diferentes, reais e iguais ou n�o possui ra�zes.  */

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

if(delta > 0){
	printf("\nPossui duas ra�zes reais e diferentes que s�o x1 = %.2f e x2 = %.2f ",x1,x2);
}
else if(delta == 0){
	printf("\nPossui duas ra�zes reais e iguais que s�o x1 = %.2f e x2 = %.2f ",x1,x2);
}
else{
	printf("\nN�o possui ra�zes reais...");
}
	getch();
	return 0;
}
