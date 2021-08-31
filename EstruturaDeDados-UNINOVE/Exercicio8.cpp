
/*8-Construa um algoritmo que, tendo como dados de entrada dois pontos 
quaisquer do plano, 
P(x1,y1 ) e Q(x2,y2 ), calcule a distância entre eles.
Obs: d=raizq((x_2-x_1 )^2+(y_2-y_1 )^2 )

Teste: x1=4; x2=7, y1=5, y2=9, d=5  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x1,x2,y1,y2,d;
	
	printf("Digite o valor de x1: ");
	scanf("%f",&x1);
	
	printf("Digite o valor de x2: ");
	scanf("%f",&x2);
	
	printf("Digite o valor de y1: ");
	scanf("%f",&y1);
	
	printf("Digite o valor de y2: ");
	scanf("%f",&y2);
	
	
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	
printf("A distância entre P (x1,y1) e Q (x2,y2) é de = %.2f",d);
	
	getch();
	return 0;
}
