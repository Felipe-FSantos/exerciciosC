/*14-	Fa�a um programa que verifique qual a esta��o clim�tica correspondente a 
um m�s fornecido. O programa deve imprimir a esta��o: primavera, ver�o, outono 
ou inverno, considerando que s�o esta��es no Hemisf�rio Sul, conforme dados abaixo: 
	Primavera: setembro/ outubro/ novembro
	Ver�o: dezembro/ Janeiro/ Fevereiro
	Outono: mar�o/ abril/ maio
	Inverno: junho/ julho/ agosto
	 
 */
 
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	printf("Digite um n�mero de  1 a 12 que representa o m�s que voc� quer saber a esta��o: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 9:  case 10: case 11: printf("\nPrimavera ");
		break;
		case 12: case 1:  case 2:  printf("\nVer�o ");
		break;
		case 3:  case 4:  case 5:  printf("\nOutuno ");
		break;
		case 6:  case 7:  case 8:  printf("\nInverno ");
		break;
		default: printf("M�s n�o existe");
	}
	getch();
	return 0;
}
