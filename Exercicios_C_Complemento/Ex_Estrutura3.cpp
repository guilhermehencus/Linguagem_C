#include <stdio.h>
#include<locale.h>
#define TOTREG 2
typedef struct{
	char nome[50];
	float peso;
	float altura;
	int idade;
	char tpsangue[4];	
	} Pessoa;
Pessoa pes[TOTREG];	
int main()
{
setlocale(LC_ALL,"Portuguese");
int i, count_id,count_alt,count_peso;
int idade_novo, idade_velha;
float altura_alto, altura_baixo, peso_menor, peso_maior;
	/* Entrada de valor */
	for (i=0; i< TOTREG; i++){
		printf("Entre com o nome do indiv�duo: \n");
		fgets(pes[i].nome,51, stdin);
		fflush(stdin);
		printf("Entre com o peso: \n");
		scanf("%f",&pes[i].peso);
		fflush(stdin);
		printf("Entre com a altura: \n");
		scanf("%f",&pes[i].altura);
		fflush(stdin);
		printf("Entre com a idade: \n");
		scanf("%i",&pes[i].idade);
		fflush(stdin);
		printf("Entre com o tipo sanguineo: \n");
		fgets(pes[i].tpsangue,5, stdin);
		fflush(stdin);	
	}
	/* C�lculo */
	for(i=0; i< TOTREG; i++){
		if(i==0)
		{ 
			count_id=pes[i].idade;
			count_alt=pes[i].altura;
			count_peso=pes[i].peso;
		}
		if(count_id>=pes[i].idade)
		{
			idade_novo=pes[i].idade;
		} 
		if(count_id<=pes[i].idade)
		{
			idade_velha=pes[i].idade;	
		} 
		if(count_alt<=pes[i].altura)
		{
			altura_alto=pes[i].altura;	
		}
		if(count_alt>=pes[i].altura)
		{
			altura_baixo=pes[i].altura;	
		}
		if(count_peso>=pes[i].peso)
		{
			peso_menor=pes[i].peso;	
		} 
		if(count_peso<=pes[i].peso)
		{
			peso_maior=pes[i].peso;	
		}
	}
	/* Sa�da */
	for(i=0; i< TOTREG; i++){
		if(idade_novo==pes[i].idade) {
			printf("O Indiv�duo mais novo �: %s com %i \n",pes[i].nome,idade_novo);
		}
		if(idade_velha==pes[i].idade) {
			printf("O Indiv�duo mais velho �: %s com %i \n",pes[i].nome,idade_velha);
		}
		if(altura_alto==pes[i].altura) {
			printf("O Indiv�duo mais alto �: %s com %.2f \n",pes[i].nome,altura_alto);
		}
		if(altura_baixo==pes[i].altura) {
			printf("O Indiv�duo mais baixo �: %s com %.2f \n",pes[i].nome,altura_baixo);
		}
		if(peso_menor==pes[i].peso) {
			printf("O Indiv�duo com menor peso �: %s com %.2f \n",pes[i].nome,peso_menor);
		}
		if(peso_maior==pes[i].peso) {
			printf("O Indiv�duo com maior peso �: %s com %.2f \n",pes[i].nome,peso_maior);
		}
	}
}
