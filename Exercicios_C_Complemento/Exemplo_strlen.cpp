/* Exemplo de strlen */
#include <stdio.h>
#include <string.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[30]="Guilherme Cust�dio";
	printf("O tamanho da string �: %d \n",strlen(nome));
	printf("O tamanho da string �: %d \n",sizeof(nome));
}
