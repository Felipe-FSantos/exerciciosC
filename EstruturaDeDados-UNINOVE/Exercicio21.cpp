/* 21- Faça um programa que apresente um menu de opções conforme especificado 
abaixo, mostre na tela a opção escolhida, saindo apenas quando for digitado 
o número cinco. (Utilize: do...while)
Menu de opções
1.Incluir
2. Consultar
3. Alterar
4. Imprimir
5. Sair
Digite a opção:
 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int op;
	
	do{
		printf("\n \t\tMenu de Opções \t\t\n 1.Incluir \t\n 2. Consultar \t\n 3.Alterar \t\n 4.Imprimir \t\n 5. Sair \t\n\n Digite a Opção desejada: ");
		scanf("%d",&op);
	} while(op != 5);
	
	getch();
	return 0;
}
