#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float totalPontos;
    int CPF,idade,op;
    char nome[30];
    char sexo,resp;
    op=1;
    
// cadastro pacientes
while(op!=0){
    totalPontos=0;
    printf("digite:\n 1-Cadastra Paciente\n 0-Sair..\n");
    scanf("%d",&op);

switch (op)
{
case 1:
printf("-----CADASTRO-----\n\n");
printf("informe seu CPF:\n");
scanf("%d",&CPF);
fflush(stdin);
printf("informe seu nome completo:\n");
scanf("%s",&nome);
fflush(stdin);
printf("informe seu sexo:\n");
scanf("%s",&sexo);
fflush(stdin);
printf("informe sua idade:\n");
scanf("%d",&idade);
fflush(stdin);

// realiza triagem
system("cls");
printf("Digite S ou N para as perguntas:\n");
if (totalPontos==0){
    printf(" tem Febre ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S'))
    {
        totalPontos=totalPontos+5;
    }
    printf(" tem Dor de cabeça ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+1;
    }
    printf(" tem secreção nasal ou espirros ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+1;
    }
    printf(" tem Dor/irritação na Garganta ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+1;
    }
    printf(" tem Dificuldade respiratória?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+10;
    }
    printf(" tem Dores no Corpo ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+1;
    }
    printf(" tem diarréia ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+1;
    }
    printf(" Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19 ?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+10;
    }
    printf("Esteve em locais com grande aglomeração?\n");
    scanf("%s",&resp);
    if ((resp=='s') || (resp=='S')){
        totalPontos=totalPontos+3;
    }

    printf("Realizando triagem aguarde..\n");

    if((totalPontos>0)&&(totalPontos<9)){
        printf("Por favor , Dirija-se a sala 1 (Baixo Risco)\n");
    }else{
        if((totalPontos>9)&&(totalPontos<20)){
            printf("Por favor , Dirija-se a sala 2 ( Médio Risco)\n");
        }else{
           if(totalPontos>=20){
            printf("Por favor , Dirija-se a sala 3 ( Alto Risco)\n");
           } 
        }
    }
    
    
}
break;
}
}
}
