/* Exemplo de memcpy */
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[30]="Guilherme Cust�dio", nome2[30]="Henrique Guimar�es";
	memcpy(nome, nome2, 9);
	printf("%s \n",nome);
}
