# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num=0,qtdD=0,qtdF=0;
	printf("Digite 10 valores aleat�rios");
	for(int i = 1; i < 11;i++){
		printf("\n Digite o %d� valor: ",i);
		scanf("%d",&num);
		if(num>15 && num <=35){
			qtdD= qtdD +1;
		}else{
			qtdF = qtdF +1;
		}
	}
	printf("N�mero de numeros DENTRO do intervalo de 15 e 35 � de: %d",qtdD);
	
	printf("\nN�mero de numeros FORA do intervalo de 15 e 35 � de: %d",qtdF);
	getch();
	return 0;
}

