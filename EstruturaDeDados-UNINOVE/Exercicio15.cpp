/*15-	 Fa�a um programa que leia tr�s n�meros inteiros, sendo que o 
primeiro corresponde a um c�digo e os outros dois correspondem a 
operando para o c�lculo do produto not�vel entre os mesmos com base 
na tabela abaixo: (SWITCH...CASE)
teste: a= 7 e b=2 1-25; 2-81; 3-53; 4-45; 5-45

C�DIGO	PRODUTO NOT�VEL						F�RMULA
1		Quadrado da diferen�a			x=(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferen�a do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferen�a 	(a + b)*(a - b)

  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,x,op;
	printf("Digite dois valores inteiros: ");
	scanf("%d",&a);
	printf("\nDigite o 2� Valor: ");
	scanf("%d",&b);
	printf("Agora digite a op��o desejada: \n1-Quadrado da diferen�a\n2-Quadrado da soma\n");
	printf("3-Soma do quadrado\n4- Diferen�a do quadrado\n5-Produto da soma pela diferen�a");
	printf("\n\n Digite a op��o desejada: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			x = (a-b)*(a-b);
			printf("F�rmula: '(A - B) X (A - B)' \n");
			printf("O quadrado da diferen�a entre %d e %d �: %d ",a,b,x);
			break;
			
		case 2:
			printf("F�rmula: '(A + B) X (A + B)' \n");
			x = (a + b)* 2;
			printf("O quadrado da soma entre %d e %d �: %d",a,b,x);
			break;
			
		case 3:
			printf("F�rmula: '(A X A) + (B X B)' \n");
			x= (a*a)+(b*b);
			printf("A Soma do quadrado entre %d e %d �: %d",a,b,x);
			break;
			
		case 4:
			printf("F�rmula: '(A X A) - ( B X B)' \n");
			x=(a*a)-(b*b);
			printf("A Diferen�a do quadrado entre %d e %d �: %d",a,b,x);
			break;
			
		case 5:
			printf("F�rmula: '(A + B) X (A - B)' \n");
			x = (a + b) * (a - b);
			printf("O Produto da soma pela diferen�a entre %d e %d �: %d",a,b,x);
			break;
	}
	
	getch();
	return 0;
}
