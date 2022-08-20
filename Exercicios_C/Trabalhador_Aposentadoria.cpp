#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float c,asn,asi,id,tt,d;
	d=2018;
	printf("escreva o seu código empregador:");
	scanf("%f",&c);
	printf("escreva o ano de nascimento:");
	scanf("%f",&asn);
	printf("escreva o ano de seu ingresso:");
	scanf("%f",&asi);
	id=2018-asn;
	tt=2018-asi;
	if(id>=65 or tt>=30 or id>=60 and tt>=25)
	{
		printf("requer aposentadoria");
	}
	else
	{
		printf("não requer");
	}
}
