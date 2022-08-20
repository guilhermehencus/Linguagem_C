/* Exemplo de atof */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>
#include<locale.h>	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float i;
	char numero[7];
	printf("Entre com uma string decimal: ",numero);
	fgets(numero, 7, stdin);
	i=atof(numero);
	printf("Valor da string \n",numero);
	printf("%.2f \n",i);
}
