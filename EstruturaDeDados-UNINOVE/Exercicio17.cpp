/* 17-	Calcular a m�dia aritm�tica de 3 notas de 3 alunos. Mostrar
se o aluno est� aprovado ou reprovado. Para ser aprovado tem que ter m�dia
maior ou igual a 6. (Utilize: while) */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	int aluno = 1;
	
	
	while(aluno <= 3){
		printf("Digite as notas do %d� aluno: ",aluno);
		printf("\t\nDigite a primeira nota: ");
		scanf("%f",&n1);
		
		printf("\t\nDigite a segunda nota: ");
		scanf("%f",&n2);
		
		printf("\t\nDigite a terceiraa nota: ");
		scanf("%f",&n3);
		
		media = (n1+n2+n3)/3;
		printf("\tSua m�dia � %.2f",media);
		
		if(media >=6){
			printf("\n\t ALUNO %d \nVoc� est� aprovado!!!\n\n",aluno);
		}
		else{
			printf("\n ALUNO %d Voc� est� reprovado!!!\n\n", aluno);
		}
		aluno++;
	}
	
	
	getch();
	return 0;
}
