 	#include<stdlib.h>     //Biblioteca para utilizar funções do Sistema
	#include<stdio.h>      //Biblioteca para entrada e saída de dados
	#include <conio.h>		
	float calcCel (float f);
 
 	main()
			{
			float Fahrenheit, Celsius;
			printf("\n\nDigite os graus Fahrenheit:\n\n");
       		scanf("%f", &Fahrenheit); 
        	Celsius = calcCel (Fahrenheit); //Realiza o calculo (Chamando o CalcCel) e joga o resultado na Var Celsius
        	printf("\nFahrenheit convertido para Celsius: %.2f. \n", Celsius);	
        	getch();
			}
			
				float calcCel (float f) //Função que apenas calcula o valor de Fahrenheit...
					{																		
					      float c;
					      c =(f - 32) * 5 /9;
					      return c;     					      
					}
