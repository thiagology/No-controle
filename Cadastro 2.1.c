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
		  
		  	
		  	//função sem retorno
		  	
		  	int cadprod(void)
		  	{

			Produto cadastro[100];
			int i = 0;
			char opcao;
			char sair;
			
				do
				{
					//preenchendo variavel
							
							
								printf("\n Nome do produto: \n");
	                    		scanf("%s", &cadastro[i].nome);
	                   			getchar();
	                   			
	                   			
	                   			printf("\nDigite o numero de identificação do produto: \n");
			                    scanf("%i", &cadastro[i].ID);
			                    getchar();
			                    
			                    
			                    printf("\n Tipo do produto: \n");
					            scanf("%s", &cadastro[i].tipo);
					            getchar();
					            
					            
					            printf("\nQuantidade: \n");
			                    scanf("%i", &cadastro[i].quantidade);
			                    getchar();
			                    
			                    
			                    printf("\n Preço: \n");
			                    scanf("%f", &cadastro[i].preco);
			                    getchar();
			                    
			                    
			                    printf("\n validade do produto: \n");
			                    scanf("%s", &cadastro[i].validade);
			                    getchar();	
			                    
			                    
			                    		//Imprimindo no arquivo e na tela
			                    		
			                    		printf("\n\n\nNome do produto: %s\nID: %i\nTipo: %s\nPreço: %f\nValidade: %s\nQuantidade: %i\n", cadastro[i].nome, cadastro[i].ID, cadastro[i].tipo, cadastro[i].preco, cadastro[i].validade, cadastro[i].quantidade);				            			
				            			
				            			printf("\n\nCadastro realizado com sucesso\n\n");

										printf("Cadastrar novo produto? ( digite 's' para sim e 'n' para voltar oa menu anterior)");
										scanf("%c", &opcao);

										switch(opcao)
										{
											case 's':
											i++;
											break;

											case 'n':
											sair = 'sair';
											break;

											default:
											printf("opção invalida!");
											break;
											
										};
				            			
				            				
				}while(sair == 'sair');
				
			                    							
									                    
			return 0;	
		  		
			  }
			  
			 
		  	
		  	
		  	
