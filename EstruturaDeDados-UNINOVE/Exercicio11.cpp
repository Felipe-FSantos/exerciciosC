/*11-Um cliente ao adquirir um determinado produto em uma loja, foi informado 
de que havia descontos progressivos conforme a quantidade de unidades compradas.
 O preço unitário é de R$ 75,00. Faça um programa que receba a quantidade de 
 produtos e apresente na tela o valor pago:
	sem desconto se a compra for menor que 10 unidades;
	desconto de 10% se a compra for acima de 10 unidades;
	desconto de 15% se a compra for acima de 40 unidades;
	desconto de 25% se a compra for acima de 100 unidades.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>
# define item 75.00f

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtdItem;
	float vlrDesconto, vlrSDesconto;
	printf("O valor unitário é: R$ 75,00\n");
	printf("Digite quantas unidades você vai adquirir: ");
	scanf("%d", &qtdItem);
	vlrSDesconto= qtdItem * item;
	printf("\nValor total SEM Desconto:R$ %.2f\n\n", vlrSDesconto);
	
	if(qtdItem < 10){
		vlrDesconto =  vlrSDesconto;
	printf("Valor COM desconto:R$ %.2f\n\n", vlrDesconto);
	}else if(qtdItem < 40){
		vlrDesconto = vlrSDesconto * 0.90;
		printf("Valor COM desconto:R$ %.2f\n\n", vlrDesconto);
	}else if(qtdItem < 100){
		vlrDesconto = vlrSDesconto*0.85;
		printf("Valor COM desconto:R$ %.2f\n\n", vlrDesconto);
	}else {
		vlrDesconto = vlrSDesconto * 0.75;
		printf("Valor COM desconto:R$ %.2f\n\n", vlrDesconto);
	}
	
	
	getch();
	
	return 0;
}

