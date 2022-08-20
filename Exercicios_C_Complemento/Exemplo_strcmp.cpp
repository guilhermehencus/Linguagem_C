/* Exemplo de strcmp
	strlwr: todos os caracteres com caixa baixa
	strupr: todos os caracteres com caixa alta
 */
#include <stdio.h>
#include <string.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[10], nome2[10];
	printf("Entre com o nome do indivíduo: \n");
	gets(nome);
	printf("Entre com outro nome: \n");
	fgets(nome2, 10, stdin);
	if(strcmp(strlwr(nome),strlwr(nome2)) ==0){
		printf("Strings iguais");
	}
	else {
		printf("Strings diferentes");
	}
	if(strcmp(nome,nome2)>0){
		printf("Nome: %s é maior que nome2: %s", nome, nome2); /* Tabela ASCII */
	} 
}
