#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int cb,dt;
	float p;
	p=0.05;
	dt=2010;
	for (cb=20000;dt<=2030;cb=cb*p)
	{
		dt++;
		printf("\no ano %d vai ter uma população de:%d",dt,cb);
	}
}
