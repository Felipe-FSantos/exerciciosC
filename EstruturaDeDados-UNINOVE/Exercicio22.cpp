/*
22- Fa�a um programa que calcule e imprima a m�dia dos 50 primeiros
m�ltiplos de 2 e 3 maiores que 999 e menores que 1300. (Utilize: for)
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
			printf("O n�mero %d � m�ltiplo de 2 e 3. \n",cont);
			soma=soma+cont;
			qtd=qtd+1;
		}
	}
	media = soma/qtd;
	printf("A m�dia dos 50 n�meros entre 999 e 1300 m�ltiplos de 2 e 3 �: %.2f",media);
	getch();
	return 0;
}
