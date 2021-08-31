/*
22- Faça um programa que calcule e imprima a média dos 50 primeiros
múltiplos de 2 e 3 maiores que 999 e menores que 1300. (Utilize: for)
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont,soma=0, qtd=0;
	float media;
	
	for(cont = 1000; cont < 1300 ;cont++){
		if(cont % 2 == 0 && cont %3 == 0){
			printf("O número %d é múltiplo de 2 e 3. \n",cont);
			soma=soma+cont;
			qtd=qtd+1;
		}
	}
	media = soma/qtd;
	printf("A média dos 50 números entre 999 e 1300 múltiplos de 2 e 3 é: %.2f",media);
	getch();
	return 0;
}
