	#include<stdlib.h>     
	#include<stdio.h>      
	#include <conio.h>
	void pesoIdeal();		
 
 	main()
			{
		 pesoIdeal();			
			}			
			void pesoIdeal(){					
					system("cls"); //Limpa a tela 
					
			    float altura,pesoideal;
			    int sexo;
			    printf("Este programa calcula o peso ideal de acordo com altura e sexo.\n");
			    printf("Qual sua altura? ");
			    scanf("%f",&altura);
			    SEXO: printf("Qual seu sexo? \n 1 = Masculino \n 2 = Feminino: ");
			    scanf("%d",&sexo);
			    switch(sexo)      //Analisa a variável sexo
			    {
			    case 1:           //Se o valor da variavel sexo for igual a 1, excuta esse bloco
			         {pesoideal=(72.7*altura)-58;
			         printf("Seu peso ideal e: %.2f quilos\n\n",pesoideal);
			         }
			         break;
			         case 2:    //Se o valor da variavel sexo for igual a 2, excuta esse bloco
			         {pesoideal=(62.1*altura)-44.7;
			         printf("Seu peso ideal e: %.2f quilos\n\n",pesoideal);
			         }
			         break;
			         default: {printf("OPCAO INVALIDA\n");   //Se o valor da variavel sexo for diferente de 1 e 2 imprime invalido
			           goto  SEXO;                           //Volta para o ponto de referencia chamado SEXO
			           }
			    }
			   system("pause");
				}  									
