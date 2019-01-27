#include <stdio.h>
#include <string.h>


typedef struct
{

char usuario[20];
char senha[20];
int perm;

}Login;


int main()
{

  int log = 0,
  fim = 0,
  perm = 0;
  Login login;

  printf("\n\t*********GERENCIEI*********\n");

  do
{
  
  printf("\n1. Cadastrar Usuario\n2. Login\n");
  int op;
  scanf("%i", &op);
  
 if (op == 1)
 {
  
    printf("\n*Cadastrar Usuario*\nLogin: ");
    scanf("%s", login.usuario);
    getchar();
    printf("Senha: ");
    scanf("%s", login.senha);
    getchar();
    printf("Permissao: ");
    scanf("%i", &login.perm);
    getchar();
    printf("\nCadrastrou amiga.\n");
 }
  else if(op == 2)
  {
    printf("\n\t*Login*");
    char login1[20], senha1[20];
    int chek = 0;

      do
      {
          printf("\nUsuario: ");
          scanf("%s", login1); 
          if (strcmp(login.usuario, login1) == 0) 
          {
              printf("Senha: ");
            scanf("%s",senha1); 
            if (strcmp(login.senha, senha1) == 0) 
            {
              printf("Logado");          
              chek++;
              log = 1;
            }
            else
            {
              printf("Senha incorreta. Tente Novamente:\n");      
            }
          }
          else
          {
            printf("Login Incorreto. Tente novamente:\n");
          }      
      }while(chek == 0);
    


  }
  else
  {
      printf("\n*Opcao invalida*\n\n");
  }

}while(log == 0);

do 
{
    printf("\n\n*****BEM VINDO(A)*****\n");

  if(login.perm == 1)
  {
    do
    {
      int op;
    printf("\n1. Vendas\n2. Fechar caixa\n");
    scanf("%i", &op);

      switch(op)
      {
        case 1:
        printf("\nVendeu toda\n");

        case 2:
        printf("\nLucro: nada neh fofa");
        fim = 1;
           
        break;

        default:
        printf("*Opcao Invalida*\n");
      }
    
    }while(fim == 0);
  }
  else if(login.perm == 2)
  {
    do
    {
      int op;
      printf("\n1. Mudar Precos\n2. Adicionar/Remover Produtos\n3. Balanco de vendas e Lucros\n0. Sair\n");
      scanf("%i", &op);

      switch(op)
      {

        case 1:
        printf("\nMudou toda\n");
        break;

        case 2:
        printf("\nAdicionou toda\n");
        break;

        case 3:
        printf("\nLucro: nada neh fofa");    
        break;

        case 0:
        fim = 1;
        break;

        default:
        printf("*Opcao Invalida*\n");
      }
    
    }while(fim == 0);

  }


  while(fim == 1)
  {
    int ses = 1;
    printf("\nAperte 0 para encerrar sessao.\n");
    scanf("%i", &ses);
    if (ses == 0)
    {
      log = 0; 
      fim = 0;
    }
    else
    {
      printf("*\nOpcao Invalida\n*");
    }
  }

}while (log == 1);



return 0;
}
