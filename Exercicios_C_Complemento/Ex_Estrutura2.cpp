/* Exemplo Estrutura 2 */
#include <stdio.h>
#include<locale.h>
typedef struct {
	char nome[50];
	float peso;
	float altura;
	int idade;
	char tpsangue[4];	
	} Pessoa;
Pessoa pai, mae;	
int main()
{
	/* Entrada de valores do pai */
	setlocale(LC_ALL,"Portuguese");
	float med_id;
	printf("Entre com o nome do indivíduo: \n");
	fgets(pai.nome,51, stdin);
	fflush(stdin);
	printf("Entre com o peso: \n");
	scanf("%f",&pai.peso);
	fflush(stdin);
	printf("Entre com a altura: \n");
	scanf("%f",&pai.altura);
	fflush(stdin);
	printf("Entre com a idade: \n");
	scanf("%i",&pai.idade);
	fflush(stdin);
	printf("Entre com o tipo sanguineo: \n");
	fgets(pai.tpsangue,5, stdin);
	fflush(stdin);
	/* Entrada de valores da mãe */	
	printf("Entre com o nome do indivíduo: \n");
	fgets(mae.nome,51, stdin);
	fflush(stdin);
	printf("Entre com o peso: \n");
	scanf("%f",&mae.peso);
	fflush(stdin);
	printf("Entre com a altura: \n");
	scanf("%f",&mae.altura);
	fflush(stdin);
	printf("Entre com a idade: \n");
	scanf("%i",&mae.idade);
	fflush(stdin);
	printf("Entre com o tipo sanguineo: \n");
	fgets(mae.tpsangue,5, stdin);
	fflush(stdin);
	/* Imprimir a média  */
	printf("%.1f \n", (float) (pai.idade+mae.idade)/2);
}
