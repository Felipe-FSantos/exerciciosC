/*3- Fa�a um programa que calcule a velocidade m�dia de um ve�culo.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float si, sf, tf, ti, vm;
printf("Digite o espa�o final ");
scanf("%f",&sf);
printf("Digite o espa�o inicial ");
scanf("%f",&si);
printf("Digite o tempo final ");
scanf("%f",&tf);
printf("Digite o tempo inicial ");
scanf("%f",&ti);
vm=(sf-si)/(tf-ti);
printf("A velocidade m�dia � %.2f",vm);
	getch();
	return 0;
}

