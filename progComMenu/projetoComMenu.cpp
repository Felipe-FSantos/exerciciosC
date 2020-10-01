			#include<stdlib.h>     //Biblioteca para utilizar funções do Sistema
			#include<stdio.h>      //Biblioteca para entrada e saída de dados
			#include <conio.h>
			#include<math.h> //Biblioteca do Mathpow
			#include <Windows.h> //Biblioteca para rodar o "Sleep"
			
			
			void menu();
			void pesoIdeal();
			void programa_Segundos();			
			float calcCel (float f);
			float calcFuncao (float x,float y,float resul); 
			
			main()
			{
				menu (); //Metodo Main chama apenas o Menu				
			}
			
			void menu(){
				//Método Menu controla TODOS os programas...
				int opcao; 
				system("cls");
				do
			    {
								printf(" \n\n");
			                	printf("  ################################# \n");
			                	printf("||                                 ||\n");
			                	printf("||               MENU              ||\n");
			                	printf("||=================================||\n");
			                	printf("||                                 ||\n");
			                	printf("|| Menu de opcoes:                 ||\n");
			                	printf("||                                 ||\n");
			                	printf("||                                 ||\n");
			                	printf("|| 1. Procedimento Segundos        ||\n");
			                	printf("|| 2. Procedimento Peso Ideal      ||\n");
			                	printf("|| 3. Funcao   Fahrenheit          ||\n");
			                	printf("|| 4. Funcao Expressao             ||\n");
			                	printf("||                                 ||\n");
			                	printf("|| 0. Encerrar o Programa          ||\n");
			                	printf("||                                 ||\n");
			                	printf("  ================================= \n \n");
			                	printf("       Digite a opcao desejada: "); //TABELA INICIAL
			                	
			                	scanf("%d",&opcao);
			                	
								switch (opcao)
			                {
			                    case 1:
			                        programa_Segundos();
			                        break;
			                    case 2:
			                        pesoIdeal();
			                        break;
			                    case 3:
			                    	system("cls");
			                    	 float Fahrenheit, Celsius;
			                    	printf("\n\nDigite os graus Fahrenheit:\n\n");
       								 scanf("%f", &Fahrenheit); 
        								Celsius = calcCel (Fahrenheit); //Realiza o calculo (Chamando o CalcCel) e joga o resultado na Var Celsius
        								printf("\nFahrenheit convertido para Celsius: %.2f. \n", Celsius);
									
									system("pause");
				
			                        break;
			                    case 4:
			                    	system ("cls");
			                    	float x, y,resul;
			                    	printf("\n Digite o valor de X: ");
			                    	scanf("%f",&x);
			                    	printf("\n Digite o valor de Y: ");
			                    	scanf("%f",&y);
			                    	calcFuncao (x,y,resul); //chamando a função 
			                        break;
			                        
			                    case 0:
			                    	system("cls");
			                        printf("Encerrando o Programa em 3 Segundos...\n");
			        				Sleep(3000); //Espera 3 segundos... Depois encerra o Programa.
									exit(0);     
			                    default:
			                              printf("\n Voce deve escolher uma opcao valida\n");
			                              printf("Precione qualquer tecla para voltar ao menu\n");
			                              break;
			                    }//fim do switch
			                	system("cls");
			                 } while (opcao != 0);
			}
			
			void programa_Segundos() //Procedimento não retorna valor
			        {
			        	system("cls"); //Limpa a tela 
			            int tempo, segundos, minutos, horas;
			
			            printf("Digite o valor em Segundos: ");
			            
			             scanf("%d",&tempo);
			             
			              horas = tempo / 3600;
			
			              minutos = (tempo % 3600) / 60;
			
			              segundos = (tempo % 3600) % 60;
			            
			             printf("Horas: %.2d \nMinutos: %.2d \nSegundos: %.2d \n", horas, minutos, segundos); //Mostra mensagem com os resultado
			
			             system("pause");
			  			
			        }
			
			
			
			void pesoIdeal(){ //Procedimento não retorna valor
					
					system("cls"); //Limpa a tela 
					
			    float altura,pesoideal;
			    int sexo;
			    printf("Este programa calcula o peso ideal de acordo com altura e sexo.\n");
			    printf("Qual sua altura? ");
			    scanf("%f",&altura);
			    SEXO: printf("Qual seu sexo? 1=HOMEM 2=MULHER: ");
			    scanf("%d",&sexo);
			    switch(sexo)      //Analise a variável sexo
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
			           goto  SEXO;                      //Volta par ao ponto de referencia chamado SEXO
			           }
			    }
			   system("pause");
				}  											
			
					float calcCel (float f) //Função que apenas calcula o valor de Fahrenheit...
					{																		
					      float c;
					      c =(f - 32) * 5 /9;
					      return c;     
					      
					}
					
					float calcFuncao (float x, float y, float resul){
						float potenx, poteny,r1;
						potenx = pow(x,3);
						poteny = pow(y,3);
						r1 = potenx - poteny;    
						
						if(r1 == 0)	{
						
								printf("Resultado = %f \n", r1);
				system("pause");
						}else{
							//resul = (x - y) / r1;
							r1 = potenx - poteny;    
							resul = (x - y) / r1;
							printf("O Resultado de (X-Y) / X^3 - Y^3 e : %f \n", resul);
				system("pause");
						}
						return 0;
					}
					
					
					
					


			
				
				
