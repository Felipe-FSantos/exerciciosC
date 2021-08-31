/*15-	 Faça um programa que leia três números inteiros, sendo que o 
primeiro corresponde a um código e os outros dois correspondem a 
operando para o cálculo do produto notável entre os mesmos com base 
na tabela abaixo: (SWITCH...CASE)
teste: a= 7 e b=2 1-25; 2-81; 3-53; 4-45; 5-45

CÓDIGO	PRODUTO NOTÁVEL						FÓRMULA
1		Quadrado da diferença			x=(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferença do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferença 	(a + b)*(a - b)

  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,x,op;
	printf("Digite dois valores inteiros: ");
	scanf("%d",&a);
	printf("\nDigite o 2º Valor: ");
	scanf("%d",&b);
	printf("Agora digite a opção desejada: \n1-Quadrado da diferença\n2-Quadrado da soma\n");
	printf("3-Soma do quadrado\n4- Diferença do quadrado\n5-Produto da soma pela diferença");
	printf("\n\n Digite a opção desejada: ");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			x = (a-b)*(a-b);
			printf("Fórmula: '(A - B) X (A - B)' \n");
			printf("O quadrado da diferença entre %d e %d é: %d ",a,b,x);
			break;
			
		case 2:
			printf("Fórmula: '(A + B) X (A + B)' \n");
			x = (a + b)* 2;
			printf("O quadrado da soma entre %d e %d é: %d",a,b,x);
			break;
			
		case 3:
			printf("Fórmula: '(A X A) + (B X B)' \n");
			x= (a*a)+(b*b);
			printf("A Soma do quadrado entre %d e %d é: %d",a,b,x);
			break;
			
		case 4:
			printf("Fórmula: '(A X A) - ( B X B)' \n");
			x=(a*a)-(b*b);
			printf("A Diferença do quadrado entre %d e %d é: %d",a,b,x);
			break;
			
		case 5:
			printf("Fórmula: '(A + B) X (A - B)' \n");
			x = (a + b) * (a - b);
			printf("O Produto da soma pela diferença entre %d e %d é: %d",a,b,x);
			break;
	}
	
	getch();
	return 0;
}
