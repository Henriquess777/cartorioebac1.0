#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaçoem memória
#include <locale.h> //biblioteca de alocações de texto por região
#include  <string.h>// biblioteca respomsável por cuida das string

int Registro() // area de cadastro pessoa do aluno.
{
// inicio da criação de variáveis/string
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // final da criação de variáveis/string
   
   // coletando cpf e nome etc..
   printf(":---------------------------------:\n");
   printf(":Digite o cpf a ser cadastrado:   :\n");
   printf(":---------------------------------:\n");
   
   scanf("%s",cpf);//%s refere-se o string
   
   strcpy(arquivo, cpf); // respomsalvel por copiar os  valores das  string
   
   FILE *file; // criar arquivo
   file = fopen(arquivo,"w"); // criar arquivo W seguinifica escrever
   fprintf(file,cpf); // salvo o valor da varialvel
   fclose(file); // fecho o arquivo
   
   
   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf(":---------------------------------:\n");
   printf(":Digite o nome a ser cadastrado:  :\n");
   printf(":---------------------------------:\n");
   scanf("%s",nome);
   
   file = fopen(arquivo,"a");
   fprintf(file,nome);
   fclose(file);
   
   
   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf(":---------------------------------:\n");
   printf(":Digite o sobrenome               :\n");
   printf(":---------------------------------:\n");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo,"a");
   fprintf(file,sobrenome);
   fclose(file);
   
   
   file = fopen(arquivo,"a");
   fprintf(file,",");
   fclose(file);
   
   printf(":---------------------------------:\n");
   printf(":Digite o cargo a ser cadastrado: :\n");
   printf(":---------------------------------:\n");
   scanf("%s",cargo);
   
   file = fopen(arquivo,"a");
   fprintf(file,cargo);
   fclose(file);
    
	system("pause");
      
}

int Comsultar() // area de pesquisa de nomes 
{
   setlocale(LC_ALL,"portuguese" ); // Definindo liguagem
   char cpf[40];
   char conteudo[200];
   
   printf(":---------------------------------:\n");
   printf(":pesquisar cpf:                   :\n");
   printf(":---------------------------------:\n");
   
   scanf("%s",cpf); 
   
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	printf(":---------------------------------:\n");
   	printf("cpf não localizado.               :\n");
   	printf(":---------------------------------:\n");
   }
   
   
   while(fgets(conteudo,200, file) !=NULL)
   {
   printf("\nessas são as informaçãoes do usuário:");
   printf("%s",conteudo);
   printf("\n\n");		
   }
   
   system("pause");
   
}

int Deletar() // area de deletar usuario
{
   char cpf[40];
   
   printf(":---------------------------------:\n");
   printf(":Deletar CPF:.                    :\n");
   printf(":---------------------------------:\n");
   scanf("%s",cpf);
   
   remove(cpf);
   
   FILE *file;	
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	printf(":---------------------------------:\n");
   	printf(":CPF NÃO EXISTE                   :\n");
   	printf(":---------------------------------:\n");
   	system("pause");
   }

}


int main()
{
	int opcao=0; // Definindo variáveis
	int x=1;
	
for(x=1;x=1;)
{
	  system("cls");// responsavel por limpar  a tela
	
	
 setlocale(LC_ALL,"portuguese" ); // Definindo liguagem 
 
     printf(":---------------------------------:\n"); // Inicio do menu
     printf(":<<<<<<  Cartório de EBAC  >>>>>> :\n");
     printf(":---------------------------------:\n");
     printf(":                                 :\n");
     printf(":Escolha a opção desejada no menu :\n");
     printf(":---------------------------------:\n");
     printf(": 1. Registrar nomes:             :\n");
     printf(": 2. Consultar nomes:             :\n");
     printf(": 3. Delatar nomes:               :\n");
     printf(":---------------------------------:\n");
     printf(":ESCOLHA A OPÇÃO DESEJADA         :\n");        
     printf(":---------------------------------:\n");
          scanf("%d", &opcao); // Fim do menu
   
          system("cls");  // Armazenamento de ecolha de usuario
          
          
          switch(opcao)// inicio da celeçao do menu 
		  {
                       		  
            case 1:
            Registro();// chamada de funções
            break;
            
            
            case 2:
            Comsultar();
            break;
            
            
            case 3:	
		    Deletar();
            break;
            
            
            default:
            printf("Opção não existente  ");
            system("pause");
            break;
            	
        }
   
         
   	        } // Fim da seleção
}


 
