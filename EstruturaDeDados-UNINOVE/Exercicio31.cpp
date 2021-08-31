/*31)Faça um programa que registre as temperaturas de uma semana e informe 
as temperaturas que ficaram acima da média.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[7], media=0;
	int i;
	for(i=0;i<7;i++){
		printf("Digite a temperatura ");
		scanf("%f",&vet[i]);
		media+=vet[i];
		//media=media+vet[i];
	}
	media=media/7;
	printf("\n\nA média das temperaturas em uma semana foi %.2f°C\n\n",media);
	for(i=0;i<7;i++){
		if(vet[i]>media){
			printf("A temperatura foi acima da média %.2f°C\n",vet[i]);
	}
}
	getch();
	return 0;
}
