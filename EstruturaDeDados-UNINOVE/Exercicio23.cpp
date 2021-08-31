/*23- Faça um programa que receba um número inteiro positivo qualquer, 
calcule e mostre na tela os números pares e a média dos números ímpares 
compreendidos entre 1 e o número digitado. (Utilize: for)  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num=0,somI=0;
	
	float media;
	printf("Digite o intervalo: ");
	scanf("%d",&num);
	for(int i=0;i < num ; i++){
		if(i % 2 ==0){
		  printf("Numeros pares %d\n",i);
		} else{
		  somI  = somI + i;
		}
		  
	}
	//Sempre tera 5 impar e 5 positivo ou seja n/2 
	media = somI / (num/2);
	printf("Media de impares %.2f",media);
	getch();
	return 0;
	

}
