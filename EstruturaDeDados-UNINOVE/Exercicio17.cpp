/* 17-	Calcular a média aritmética de 3 notas de 3 alunos. Mostrar
se o aluno está aprovado ou reprovado. Para ser aprovado tem que ter média
maior ou igual a 6. (Utilize: while) */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	int aluno = 1;
	
	
	while(aluno <= 3){
		printf("Digite as notas do %dº aluno: ",aluno);
		printf("\t\nDigite a primeira nota: ");
		scanf("%f",&n1);
		
		printf("\t\nDigite a segunda nota: ");
		scanf("%f",&n2);
		
		printf("\t\nDigite a terceiraa nota: ");
		scanf("%f",&n3);
		
		media = (n1+n2+n3)/3;
		printf("\tSua média é %.2f",media);
		
		if(media >=6){
			printf("\n\t ALUNO %d \nVocê está aprovado!!!\n\n",aluno);
		}
		else{
			printf("\n ALUNO %d Você está reprovado!!!\n\n", aluno);
		}
		aluno++;
	}
	
	
	getch();
	return 0;
}
