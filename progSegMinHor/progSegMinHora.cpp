 	#include<stdlib.h>     //Biblioteca para utilizar fun��es do Sistema
			#include<stdio.h>      //Biblioteca para entrada e sa�da de dados
			#include <conio.h>
		
			void programa_Segundos();		
 
 	main()
			{
		 programa_Segundos();
			
			}
			
			void programa_Segundos() 
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
