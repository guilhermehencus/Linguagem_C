/* Exemplo de strcat */
#include <stdio.h>
#include <string.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[10], sobrenome[10];
	printf("Entre com o nome do indiv�duo: \n");
	gets(nome);
	printf("Entre com o sobrenome do indiv�duo: \n");
	fgets(sobrenome, 10, stdin);
	strcat(nome,sobrenome); 
	printf("Seu nome completo �: %s \n",nome);
}
