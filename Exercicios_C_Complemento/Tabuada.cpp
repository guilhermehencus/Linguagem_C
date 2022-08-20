#include <stdio.h>
#include<locale.h>
/* Exercicio 1 */
int main()
{
setlocale(LC_ALL,"Portuguese");
int tabu;
int tabu2;
int result;
do {
printf ("Escreva o valor da primeira tabela: \n");
scanf("%d",&tabu);
printf ("Escreva o último valor da tabela:\n");
scanf("%d",&tabu2);
}
	while (tabu < 0 and tabu2<0 and tabu>tabu2);
	if (tabu > 0 and tabu2>0 and tabu<=tabu2)
	{	
		while(tabu<=tabu2) 
		{
			for (int aux=1; aux<=10; aux++)
			{	
			printf("%d * %d = %d \n", tabu, aux, tabu*aux);
			}
		tabu++;
		}
	}
 else {
	printf ("Incorreto!!!");
	}
}
