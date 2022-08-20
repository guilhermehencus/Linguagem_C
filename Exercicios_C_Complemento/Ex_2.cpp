#include <stdio.h>
#include<locale.h>
/* Exercicio 2 par em um intervalo */
int main()
{
setlocale(LC_ALL,"Portuguese");
int val;
int val2;
printf ("Escreva o primeiro valor do intervalo: \n");
scanf("%d",&val);
printf ("Escreva o segundo valor do intervalo:\n");
scanf("%d",&val2);
if(val<=val2){
	while (val<=val2)
	{	
		if(val%2==0) {
		printf(" par:%d \n",val);
		}
	val++;
	}
}

}
