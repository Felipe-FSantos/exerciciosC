
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano1,ano2,resto;
	
	printf("Digite os dois prímeiros dígitos do ano de seu nascimento (XX): ");
	scanf("%d",&ano1);
	
	printf("Digite os dois últimos dígitos do ano de seu nascimento (XX): ");
	scanf("%d",&ano1);
	
	resto = (ano1+ano2)% 5;
	printf("Seu perfil é de uma pessoa...");
	
	switch (resto){
		case 0:	printf(" Tímida");	break;
		case 1:	printf(" Sonhadora"); break;
			
		case 2:	printf(" Paqueradora");	break;
			
		case 3:	printf(" Atraente"); break;
			
		case 4: printf(" Irresistível"); break;
	}
	
	
		getch();	
	return 0;
}
