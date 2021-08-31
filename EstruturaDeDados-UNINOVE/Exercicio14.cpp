/*14-	Faça um programa que verifique qual a estação climática correspondente a 
um mês fornecido. O programa deve imprimir a estação: primavera, verão, outono 
ou inverno, considerando que são estações no Hemisfério Sul, conforme dados abaixo: 
	Primavera: setembro/ outubro/ novembro
	Verão: dezembro/ Janeiro/ Fevereiro
	Outono: março/ abril/ maio
	Inverno: junho/ julho/ agosto
	 
 */
 
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	printf("Digite um número de  1 a 12 que representa o mês que você quer saber a estação: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 9:  case 10: case 11: printf("\nPrimavera ");
		break;
		case 12: case 1:  case 2:  printf("\nVerão ");
		break;
		case 3:  case 4:  case 5:  printf("\nOutuno ");
		break;
		case 6:  case 7:  case 8:  printf("\nInverno ");
		break;
		default: printf("Mês não existe");
	}
	getch();
	return 0;
}
