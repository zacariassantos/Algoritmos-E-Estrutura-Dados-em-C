#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 int i,j,k,gerad,num[10];

void montar_cartela();
void checar_repetidores();
int imprimir_cartela(int j);

void montar_cartela(){
	for(i=0;i<10;i++){
		gerad=rand() %99;
		checar_repetidores();
		num[i]=gerad;
	}
}
void checar_repetidores(){
	for(k=0;k<10;k++){
		if(gerad==num[k]){
			gerad=rand() %99;
			k=0;
		}
	}
}
int imprimir_cartela(int j){
	printf("\nCartela: %d - numeros: ",j);
	for(i=0;i<10;i++){
		printf("%d-",num[i]);
	}
}
int main(){
	setlocale(LC_ALL, "Português");
	int qtde;
	srand(time(NULL));
	printf("Digite a quantidade de Cartelas a serem produzidas: ");
	scanf("%d",&qtde);
	for(j=0;j<qtde;j++){
		montar_cartela();
		imprimir_cartela(j+1);
	}
}
