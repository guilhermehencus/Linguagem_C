#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i;
	i=1;
	while (i<=100)
	{
		if (i%2==0)
		{
			printf("\n� %2.d",i);
		}
		i=i+1;
	}
}
