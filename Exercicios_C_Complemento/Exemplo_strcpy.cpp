/* Exemplo de strcpy */
#include <stdio.h>
#include <string.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[10], novonome[10];
	printf("Entre com o nome do indivíduo: \n");
	gets(nome);
	strcpy(novonome,nome); 
	printf("%s e %s: \n",nome, novonome);
}
