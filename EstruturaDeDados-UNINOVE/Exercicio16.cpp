/*16-	A cidade de S�o Paulo tem uma lei que restringe a circula��o de carros 
numa determinada �rea conhecida como "Centro Expandido". 
Com base no n�mero final da placa, o motorista sabe se deve ou n�o 
circular no hor�rio proibido. Fa�a um programa que receba um n�mero 
inteiro correspondente aos d�gitos(n�meros) da placa do autom�vel e verifique 
se � o dia de rod�zio ou n�o. Considere: Switch ... case
"	Carros com placa final 1 ou 2: rod�zio na segunda-feira
"	Carros com placa final 3 ou 4: rod�zio na ter�a-feira
"	Carros com placa final 5 ou 6: rod�zio na quarta-feira
"	Carros com placa final 7 ou 8: rod�zio na quinta-feira
"	Carros com placa final 9 ou 0: rod�zio na sexta-feira

  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,a;
	printf("Digite os dois �ltimos algarismos da placa de seu carro: ");
	scanf("%d",&a);
	n = a % 10;
	printf("O rod�zio de seu carro � ");
	switch(n){
		case 1: case 2: printf("Segunda-feira");
		break;
		case 3: case 4: printf("Ter�a-feira");
		break;
		case 5: case 6: printf("Quarta-feira");
		break;
		case 7: case 8: printf("Quinta-feira");
		break;
		case 9: case 0: printf("Sexta-feira");
		break;
	}
	
	getch();
	return 0;
}
