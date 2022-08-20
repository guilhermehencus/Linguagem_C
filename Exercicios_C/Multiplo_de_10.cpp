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
		printf("\no número é:%2.d",i);
		i=i+1;
		switch (i)
		{
			case 10:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 20:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 30:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 40:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 50:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 60:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 70:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 80:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 90:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
			case 100:
				printf("\nnúmero:%2.d é múltiplo de 10",i);
				break;
		}
	}
}
