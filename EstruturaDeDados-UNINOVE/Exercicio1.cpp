/*1- Faça um programa que leia dois valores reais e exiba o primeiro com acréscimo de 
30%, e o segundo com desconto de 25%. 
ACRÉSCIMO => 30%
100%+30%+=130%=130/100=1.30
acres=valor1*1.30
acres=valor1+valor1*30/+100

DESCONTO
100%-25%=75%/100=0.75
desc=valor2-valor2*25/100

/*  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float valor1, valor2, acres, desc;
printf("Digite o valor que vai sofrer acréscimo ");
// printf = saida = escreva
scanf("%f",&valor1);
// scanf = entrada = leia
printf("Digite o valor que vai sofrer desconto ");
scanf("%f",&valor2);
acres=valor1*1.30;
desc=valor2*0.75;
printf("O valor de R$ %.2f com acréscimo de 30%% é R$ %.2f\n",valor1,acres);
printf("O valor de R$ %.2f com desconto de 25%% é R$ %.2f\n",valor2,desc);
	getch();
	return 0;
}

