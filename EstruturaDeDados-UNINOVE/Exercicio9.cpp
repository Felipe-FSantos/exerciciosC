/*9- Fa�a um programa que receba dois n�meros inteiros quaisquer 
e verifique se o primeiro � m�ltiplo do segundo. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	
	printf("Digite o 1� Valor: ");
	scanf("%d",&n1);
	
	printf("Digite o 2� Valor: ");
	scanf("%d",&n2);
	
	if(n1 % n2 ==0 ){
		printf("Numero '%d' � multiplo do n�mero: '%d' ", n1,n2);
	}else{
		printf("Numero '%d' n�o � multiplo do n�mero '%d' ", n1,n2);
	}
	
	getch();
	return 0;
}
