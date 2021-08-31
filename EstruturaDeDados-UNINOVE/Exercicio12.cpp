/*12-Faça um programa que controle o caixa de um hotel para recebimento de 
pagamento das diárias de seus hóspedes. Para o cálculo do valor a pagar, 
sabe-se que a diária é de R$ 95,00 e a taxa de serviços é estipulada de 
acordo com o número de diárias, conforme o descrito abaixo:
	15% por dia, se o número de diárias for menor do que 10.
	10% por dia, se o número de diárias for igual a 10.
	5% por dia, se o número de diárias for maior que 10.
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
	
	printf("O valor da diária é: R$ 95,00\n");
	printf("Digite quantas diárias você ficou: ");
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
	
	printf("O número de diárias foi: %d e a taxa de serviço foi de R$ %.2f ", nDia, taxa);
	printf("\nO valor total a ser pago é de R$ %.2f",total);
	getch();	
	return 0;
}

