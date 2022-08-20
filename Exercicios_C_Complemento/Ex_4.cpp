#include <stdio.h>
#include<locale.h>
/* Exercicio 4 par multiplo de 10 */
int main()
{
setlocale(LC_ALL,"Portuguese"); 
int val;
	for(val=1; val<=100; val++){	

		if(val%10==0)  {
		printf ("%d  é múltiplo de 10” \n", val);	
		}	
	}
}
