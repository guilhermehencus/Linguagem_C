#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int m;
	printf("\ndigite um n�mero de m�s:");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("\no m�s � janeiro no m�s:%2.d",m);
			break;
		case 2:
			printf("\no m�s � fevereiro no m�s:%2.d",m);
			break;
		case 3:
			printf("\no m�s � mar�o no m�s:%2.d",m);
			break;
		case 4:
			printf("\no m�s � abril no m�s:%2.d",m);
			break;
		case 5:
			printf("\no m�s � maio no m�s:%2.d",m);
			break;
		case 6:
			printf("\no m�s � junho no m�s:%2.d",m);
			break;
		case 7:
			printf("\no m�s � julho no m�s:%2.d",m);
			break;
		case 8:
			printf("\no m�s � agosto no m�s:%2.d",m);
			break;
		case 9:
			printf("\no m�s � setembro no m�s:%2.d",m);
			break;
		case 10:
			printf("\no m�s � outubro no m�s:%2.d",m);
			break;
		case 11:
			printf("\no m�s � novembro no m�s:%2.d",m);
			break;
		case 12:
			printf("\no m�s � dezembro no mes:%2.d",m);
			break;
		default:
			printf("erro");
	}
}
