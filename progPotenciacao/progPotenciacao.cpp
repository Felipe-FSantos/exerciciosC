        	#include<stdlib.h>     //Biblioteca para utilizar funções do Sistema
			#include<stdio.h>      //Biblioteca para entrada e saída de dados
			#include<math.h>
			#include <conio.h>
			
		float calcFuncao (float x,float y,float resul);	
 	main()
			{
		   	 float x, y,resul;
			 printf("\n Digite o valor de X: ");
			 scanf("%f",&x);
			 printf("\n Digite o valor de Y: ");
			 scanf("%f",&y);
			 calcFuncao (x,y,resul); //chamando a função 
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
					
