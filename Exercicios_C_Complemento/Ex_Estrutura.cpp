/* Exemplo Estrutura */
#include <stdio.h>
#include<locale.h>
typedef struct {
	char nome[50];
	float peso;
	float altura;
	int idade;
	char tpsangue[4];	
	} Pessoa;
Pessoa pes;	
int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Entre com o nome do indivíduo: \n");
	fgets(pes.nome,51, stdin);
	fflush(stdin);
	printf("Entre com o peso: \n");
	scanf("%f",&pes.peso);
	fflush(stdin);
	printf("Entre com a altura: \n");
	scanf("%f",&pes.altura);
	fflush(stdin);
	printf("Entre com a idade: \n");
	scanf("%i",&pes.idade);
	fflush(stdin);
	printf("Entre com o tipo sanguineo: \n");
	fgets(pes.tpsangue,5, stdin);
	fflush(stdin);
	/* Imprime os campos */
	printf("%s \n", pes.nome);
	printf("%.2f \n", pes.peso);
	printf("%.2f \n", pes.altura);
	printf("%i \n", pes.idade);
	printf("%s \n", pes.tpsangue);
}

