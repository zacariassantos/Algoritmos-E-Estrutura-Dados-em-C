#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2 

struct  livro
{
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
}; 

int main()
{
    setlocale(LC_ALL,"portuguese");
     struct livro ficha[TAM];
     struct livro troca;
    int busca, i, j,acha, op;

    op=0;

    while(op!=5){
    printf("1-Cadastrar os livros\n");
    printf("2-imprimir os livros cadastrados\n");
    printf("3-Pesquisa  livros por Código\n");
    printf("4-Ordena os livros por ano\n");
    printf("5-Sair..\n");
    printf("Digite uma opção:\n");
    scanf("%d", &op);
    fflush(stdin);
    switch (op)
    {
        // cadastra livros
    case 1:
      system("cls");
     for (i = 0; i < TAM ; i++)
     {
      printf("Digite o Código do livro da posição %d:", i+1);
      scanf("%d",&ficha[i].codigo);
      fflush(stdin);
      printf("Digite o título do livro:");
      scanf("%s", &ficha[i].titulo);
      fflush(stdin);
      printf("Digite  o nome do Autor:");
      scanf("%s", &ficha[i].autor);
      fflush(stdin);
      printf("Digite a área do livro:");
      scanf("%s", &ficha[i].area);
      fflush(stdin);
      printf("Digite o ano do livro:");
      scanf("%d", &ficha[i].ano);
      fflush(stdin);
      printf("Digite o nome da editora:");
      scanf("%s", &ficha[i].editora);
      fflush(stdin);
     }
    break;
    // imprimir livros cadastrados
     case 2:
     system("cls");
    for ( i = 0; i < TAM; i++)
    {
     printf("\n Codigo: %d\n", ficha[i].codigo);
     printf("\n Titulo:%s\n", ficha[i].titulo);
     printf("\n Autor: %s\n", ficha[i].autor);
     printf("\n Area: %s\n", ficha[i].area);
     printf("\n ANO: %d\n", ficha[i].ano);
     printf("\n EDITORA: %s\n", ficha[i].editora);
    }
    break;
     case 3:
     system("cls");
     printf("Digite o Codigo que Deseja Buscar:");
     scanf("%d",&busca);
     i=0;
     acha =0;
     while ((i<TAM)&&(acha==0))
     {
        if(ficha[i].codigo == busca)
        acha = 1;
        else
        i++;
     }
     if(acha == 1)
     {
     printf("\n Codigo: %d\n", ficha[i].codigo);
     printf("\n Titulo:%s\n", ficha[i].titulo);
     printf("\n Autor: %s\n", ficha[i].autor);
     printf("\n Area: %s\n", ficha[i].area);
     printf("\n ANO: %d\n", ficha[i].ano);
     printf("\n EDITORA: %s\n", ficha[i].editora); 
     }
     else
     printf("\nRegistro não encontrado"); 
    break;
     case 4:
      system("cls");
      for ( i = 0; i < TAM; i++)
      {
         for ( j = 0; j < TAM; j++)
      {
        if(ficha[i].ano>ficha[j].ano){
            troca = ficha[i];
            ficha[i]=ficha[j];
            ficha[j]=troca;
        }
      }
      }
      for ( i = 0; i < TAM; i++)
      {
     printf("\n Codigo: %d\n", ficha[i].codigo);
     printf("\n Titulo:%s\n", ficha[i].titulo);
     printf("\n Autor: %s\n", ficha[i].autor);
     printf("\n Area: %s\n", ficha[i].area);
     printf("\n ANO: %d\n", ficha[i].ano);
     printf("\n EDITORA: %s\n", ficha[i].editora); 
      }    
    break;
    }
}
}