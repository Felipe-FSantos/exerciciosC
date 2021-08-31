/*10-Fazer um programa que calcule uma equação do 2º grau e determine 
se suas raízes são reais e diferentes, reais e iguais ou não possui raízes.  */

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
printf("As raízes são x1= %.2f e x2= %.2f",x1,x2);

if(delta > 0){
	printf("\nPossui duas raízes reais e diferentes que são x1 = %.2f e x2 = %.2f ",x1,x2);
}
else if(delta == 0){
	printf("\nPossui duas raízes reais e iguais que são x1 = %.2f e x2 = %.2f ",x1,x2);
}
else{
	printf("\nNão possui raízes reais...");
}
	getch();
	return 0;
}
