#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

void main(){
	
	int numeros[TAM];
	char aux2;
	int i, aux, contador;
	char cod[TAM];
	printf("Entre com 5 Numeros:\n");
	
	for(i = 0; i < TAM; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("Digite 5 letras: ");
	
	for(i = 0; i < TAM; i++){
		scanf("%s", &cod[i]);
	}
	
	printf("Ordem atual dos itens no Array: \n");
	
	for (i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
		printf(" %c ", cod[i]);
	
	}
	
	
//Algoritmo de ordenação BubbleSort:
//No caso ele ordena os valores e também os codigos...

	for (contador= 1; contador < TAM; contador++){
		for(i = 0; i < TAM - 1; i++){
			if (numeros[i] > numeros[i + 1]){
				aux2 = cod[i];
				aux = numeros[i];
				cod[i] = cod[i+1];
				cod[i+1] = aux2;
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		}
	}
	
	printf("\nElementos do array em ordem crescente:\n");
	
	for(i = 0; i < TAM ; i++){
		printf("%4d", numeros[i]);
		printf(" %c ", cod[i]);
	}
	
	int decres = TAM;
	printf("\nElementos do Array em ordem Decrescente:\n");
		for(i = 0; i < TAM ; i++){	
		decres--;	
		printf("%4d", numeros[decres]);
		printf(" %c ", cod[i]);
	}

	printf("\n");
	
}
	
	

	
	
