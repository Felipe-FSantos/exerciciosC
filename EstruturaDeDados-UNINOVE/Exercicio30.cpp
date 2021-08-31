/*30)Faça um programa que tenha um vetor de inteiros com 10 elementos.
O programa deve ler valores para o vetor, calcular e imprimir a soma dos 
valores múltiplos de 3.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, vet [10],soma=0;
for(i=0;i<10;i++){
	printf("Digite um número ");
	scanf("%d",&vet[i]);
}
for(i=0;i<10;i++){
	if(vet[i]%3==0){
		soma=soma+vet[i];
	}
}
printf("A soma dos múltiplos de 3 digitados por você é %d",soma);
	getch();
	return 0;
}
