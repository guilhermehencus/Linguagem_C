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
	}
}
