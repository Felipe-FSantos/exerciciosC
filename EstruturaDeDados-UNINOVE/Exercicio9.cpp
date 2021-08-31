/*9- Faça um programa que receba dois números inteiros quaisquer 
e verifique se o primeiro é múltiplo do segundo. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	
	printf("Digite o 1º Valor: ");
	scanf("%d",&n1);
	
	printf("Digite o 2º Valor: ");
	scanf("%d",&n2);
	
	if(n1 % n2 ==0 ){
		printf("Numero '%d' é multiplo do número: '%d' ", n1,n2);
	}else{
		printf("Numero '%d' não é multiplo do número '%d' ", n1,n2);
	}
	
	getch();
	return 0;
}
