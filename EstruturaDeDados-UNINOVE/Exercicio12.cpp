/*12-Fa�a um programa que controle o caixa de um hotel para recebimento de 
pagamento das di�rias de seus h�spedes. Para o c�lculo do valor a pagar, 
sabe-se que a di�ria � de R$ 95,00 e a taxa de servi�os � estipulada de 
acordo com o n�mero de di�rias, conforme o descrito abaixo:
	15% por dia, se o n�mero de di�rias for menor do que 10.
	10% por dia, se o n�mero de di�rias for igual a 10.
	5% por dia, se o n�mero de di�rias for maior que 10.
  */
  
  # include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>
# define diaria 95.00f

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nDia;
	float total,taxa;
	
	printf("O valor da di�ria �: R$ 95,00\n");
	printf("Digite quantas di�rias voc� ficou: ");
	scanf("%d", &nDia);
	
	if(nDia < 10){
		taxa =0.15*nDia*diaria;
		total=nDia*diaria+taxa;
	}else if(nDia == 10){
		taxa = 0.10 * nDia * diaria;
		total = nDia * diaria + taxa;
	}else {
		taxa = 0.05 * nDia * diaria;
		total = nDia * diaria + taxa;
}
	
	printf("O n�mero de di�rias foi: %d e a taxa de servi�o foi de R$ %.2f ", nDia, taxa);
	printf("\nO valor total a ser pago � de R$ %.2f",total);
	getch();	
	return 0;
}

