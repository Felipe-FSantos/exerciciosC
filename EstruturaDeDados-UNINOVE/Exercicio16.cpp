/*16-	A cidade de São Paulo tem uma lei que restringe a circulação de carros 
numa determinada área conhecida como "Centro Expandido". 
Com base no número final da placa, o motorista sabe se deve ou não 
circular no horário proibido. Faça um programa que receba um número 
inteiro correspondente aos dígitos(números) da placa do automóvel e verifique 
se é o dia de rodízio ou não. Considere: Switch ... case
"	Carros com placa final 1 ou 2: rodízio na segunda-feira
"	Carros com placa final 3 ou 4: rodízio na terça-feira
"	Carros com placa final 5 ou 6: rodízio na quarta-feira
"	Carros com placa final 7 ou 8: rodízio na quinta-feira
"	Carros com placa final 9 ou 0: rodízio na sexta-feira

  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n,a;
	printf("Digite os dois últimos algarismos da placa de seu carro: ");
	scanf("%d",&a);
	n = a % 10;
	printf("O rodízio de seu carro é ");
	switch(n){
		case 1: case 2: printf("Segunda-feira");
		break;
		case 3: case 4: printf("Terça-feira");
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
