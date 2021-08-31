/*32)Faça um programa que armazene em um vetor a idade de 10 alunos de uma 
academia de ginástica. O programa deve calcular e mostrar na tela:
"	A idade média dos alunos;
"	A quantidade de alunos com idade acima da média;
"	A quantidade de alunos com idade igual a media;
"	A quantidade de alunos com idade abaixo da média.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int media,i, vet[10],acima=0, abaixo=0, igual=0;
for (i=0;i<10;i++){
	printf("Digite a idade ");
	scanf("%d",&vet[i]);
	media=media+vet[i];
}
media=media/10;
printf("A média das idades é %d\n\n",media);
for (i=0;i<10;i++){
	if(vet[i]>media){
	acima++;
}
else
	if(vet[i]==media){
	igual++;
}
else{
	abaixo++;
}
}
printf("A quantidade de alunos com idade acima da média é %d\n",acima);
printf("A quantidade de alunos com idade abaixo da média é %d\n",abaixo);
printf("A quantidade de alunos com idade igual a média é %d\n",igual);
	getch();
	return 0;
}
