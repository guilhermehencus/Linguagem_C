#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float n,n2,n3,p,m,g,vp,vm,vg,vt;
	p=15;
	m=20;
	g=25;
	printf("\ndigite a quantidade de camisetas dos tamanhos  pequenos vendidos:");
	scanf("%f",&n);
	printf("\ndigite a quantidade de camisetas dos tamanhos m�dios vendidos:");
	scanf("%f",&n2);
	printf("\ndigite a quantidade de camisetas dos tamanhos grandes vendidos:");
	scanf("%f",&n3);
	vp=n*15;
	vm=n2*20;
	vg=n3*25;
	printf("\no valor vendidos das camisetas dos tamanhos pequenos s�o:%2.f",vp);
	printf("\no valor vendidos das camisetas dos tamanhos m�dios s�o:%2.f",vm);
	printf("\no valor vendidos das camisetas dos tamanhos grandes s�o:%2.f ",vg);
	vt=vp+vm+vg;
	printf("\no valor total das vendas das camisetas de diferentes tamanhos s�o:%2.f",vt);
}
