/*19-	Fa�a um programa que verifique entre os 100 primeiros n�meros 
quais s�o m�ltiplos de 4 e 6 ao mesmo tempo e calcule a m�dia. (do...while)  */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float media = 0;
	int a = 1, qtd = 0;

	do{
		if(a % 4 == 0 && a % 6 == 0){
			
		 printf("\nN�mero %d � multiplo de 4 e 6 ", a);
		 media = media + a;
		 qtd = qtd + 1;
		}
		a++;
	} while(a<100);
	media=media/qtd;
	printf("A m�dia dos %d primeiros 100 m�ltiplos de 4 e 6 � %.2f",qtd,media);
	
	getch();
	return 0;
}
