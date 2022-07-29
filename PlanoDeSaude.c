#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char nome[30];
	int idade;
printf("\nDigite seu nome");
gets(nome);
fflush(stdin);
printf("\nDigite sua idade:");
scanf("%d",&idade);
if (idade<=18){
printf("\nOlá %s",nome);
printf("\nPlano de saude para pessoas de %d anos custa 50 reais.",idade);	
}else{
	if((idade>=19) && (idade<=29)){
	printf("\nOlá %s",nome);
	printf("\nPlano de saude para pessoas de %d anos custa 70 reais.",idade);	
	}else{
		if((idade>=30) && (idade<=45)){
		printf("\nOlá %s",nome);
        printf("\nPlano de saude para pessoas de %d anos custa 90 reais.",idade);	
		}else{
			if((idade>=46) && (idade<=65)){
			printf("\nOlá %s",nome);
			printf("\nPlano de saude para pessoas de %d anos  custa 130 reais.",idade);	
			}else{
			if(idade>65){
			printf("\nOla %s",nome);
			printf("\nPlano de saude para pessoas de %d anos , custa 170 reais.",idade);	
			}
		}
		}
	}
}
return(0);
}