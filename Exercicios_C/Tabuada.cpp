#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int count, num;
	printf("tabuada\n\n");
	printf("digite um número:");
	scanf("%d",&num);
	if (num>=1 and num<=10)
	{
		for (count=0;count<=10;count++)
		{
			printf("%d x %d=%d\n",num,count,num*count);
		}
	}
}
