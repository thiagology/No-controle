#include <stdio.h>
#include <stdlib.h>


//struct com as informações dos produtos
typedef struct{
          char nome[20];
	      int ID;
	      char tipo[20];
          int quantidade;
          float preco;
          char validade[10];
		  }Produto;
		  
		  	
		  	
		  	
		  	int cadprod(int contador_arc)
		  	{

			Produto produtos[1000];
			
			int contador;
			contador = contador_arc;
			int i = contador;
			char opcao;
			char sair, sair2;
	
			
				do
				{
					//preenchendo variavel
							
							
								printf("\n Nome do produto: \n");
	                    		scanf("%s", &produtos[i].nome);
	                   			getchar();
	                   			
	                   			
	                   			printf("\nDigite o numero de identificação do produto: \n");
			                    scanf("%i", &produtos[i].ID);
			                    getchar();
			                    
			                    
			                    printf("\n Tipo do produto: \n");
					            scanf("%s", &produtos[i].tipo);
					            getchar();
					            
					            
					            printf("\nQuantidade: \n");
			                    scanf("%i", &produtos[i].quantidade);
			                    getchar();
			                    
			                    
			                    printf("\n Preço: \n");
			                    scanf("%f", &produtos[i].preco);
			                    getchar();
			                    
			                    
			                    printf("\n validade do produto: \n");
			                    scanf("%s", &produtos[i].validade);
			                    getchar();	
			                    
			                    
			                    		//Imprimindo no arquivo e na tela
			                    		
			                    		printf("\n\n\nNome do produto: %s\nID: %i\nTipo: %s\nPreço: %f\nValidade: %s\nQuantidade: %i\n", produtos[i].nome, produtos[i].ID, produtos[i].tipo, produtos[i].preco, produtos[i].validade, produtos[i].quantidade);				            			
				            			
				            			printf("\n\n cadastro de produto realizado com sucesso\n\n");

										

										do
										{
											printf("Cadastrar novo produto? ( digite 's' para sim e 'x' para voltar oa menu anterior)");
											scanf("%c", &opcao);
											getchar();
											
											switch(opcao)
											{
												case 's':
												i++;
												sair2 = 'x';
												break;
	
												case 'x':
												sair = 'x';
												sair2 = 'x';
												contador=+i;
												break;
	
												default:
												printf("opcao invalida!");
												sair2 = 'f';
													
											};
												
										}while(sair2 != 'x');
										
				            			
				            				
				}while(sair != 'x');
				
			return 0;	
		  		
			  }
			  
			  
			  
			  
			  
			 int main()
			 {
			 	char menu;
			 	char sair;
			 	int contador_arc = contador_arc + 0;
			 	
			 		do
			 		{
			 			printf("\n1-Para cadastro de produto\n2-Estoque\n'x'-Para sair\n");
			 			scanf("%c", &menu);
			 			getchar();
			 			
			 			switch(menu)
			 			{
			 				case '1':
			 					cadprod(contador_arc);
			 					break;
			 				
			 				case '2':
			 					break;
			 					
			 				case 'x':
			 					sair = 'x';
			 					break;
			 				
			 				default:
			 					printf("Opcao invalida!");
			 					
			 				}
			 				
					 }while(sair != 'x');
			 
			 	return 0;
			 }
		  	
		  	
		  	
