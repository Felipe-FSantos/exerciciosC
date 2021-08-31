/*19-	Faça um programa que verifique entre os 100 primeiros números 
quais são múltiplos de 4 e 6 ao mesmo tempo e calcule a média. (do...while)  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float media = 0;
	int a = 1, qtd = 0;

	do{
		if(a % 4 == 0 && a % 6 == 0){
			
		 printf("\nNúmero %d é multiplo de 4 e 6 ", a);
		 media = media + a;
		 qtd = qtd + 1;
		}
		a++;
	} while(a<100);
	media=media/qtd;
	printf("A média dos %d primeiros 100 múltiplos de 4 e 6 é %.2f",qtd,media);
	
	getch();
	return 0;
}
