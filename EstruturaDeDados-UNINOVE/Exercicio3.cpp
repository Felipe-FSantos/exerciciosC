/*3- Faça um programa que calcule a velocidade média de um veículo.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float si, sf, tf, ti, vm;
printf("Digite o espaço final ");
scanf("%f",&sf);
printf("Digite o espaço inicial ");
scanf("%f",&si);
printf("Digite o tempo final ");
scanf("%f",&tf);
printf("Digite o tempo inicial ");
scanf("%f",&ti);
vm=(sf-si)/(tf-ti);
printf("A velocidade média é %.2f",vm);
	getch();
	return 0;
}

