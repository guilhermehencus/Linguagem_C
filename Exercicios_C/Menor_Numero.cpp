#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int count,n,menor,countm;
	countm=0;
	for(count=1;count<=5;count++)
	{
		menor=n;
		printf("\nescreva um numero:");
		scanf("%d",&n);
		if(n>=1 and n<=1000)
		{
			if (n<=menor)
			{
				countm++;
			}
		}
	}
	printf("\no numero menor apareceu:%d",countm);
}
