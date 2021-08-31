/*29)Faça um programa que receba 15 valores reais que devem ser armazenados 
em um vetor. Após a digitação de todos os valores, mostre na tela todos os 
valores pela sua metade respectiva e imprima os resultados atuais.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i;
float vet[15];
for(i=0;i<15;i++){
	printf("Digite um número ");
	scanf("%f",&vet[i]);
}
printf("\n\nTodos os valores pela sua metade\n\n");
for(i=0;i<15;i++){
	vet[i]=vet[i]/2;
	printf("%.2f\t",vet[i]);
}
	getch();
	return 0;
}

