#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i;
	i=1;
	while(i<=100)
	{
		printf("\no n�mero �:%2.d",i);
		i=i+1;
		switch (i)
		{
			case 10:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 20:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 30:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 40:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 50:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 60:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 70:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 80:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 90:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
			case 100:
				printf("\nn�mero:%2.d � m�ltiplo de 10",i);
				break;
		}
	}
}
