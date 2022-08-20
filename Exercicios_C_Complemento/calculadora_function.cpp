#include <stdio.h>
#include <locale.h>

float soma(float, float);
float subtracao(float, float);
float divisao(float, float);
float multiplicacao(float, float);
int main()
{
	int operacao;
	float num1, num2, result;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("************ Escolha qual opera��o a ser executada ************\n");
	printf("             1 - Soma                 \n");
	printf("             2 - Subtra��o                 \n");
	printf("             3 - Divis�o                 \n");
	printf("             4 - Multiplica��o                 \n\n");
	
	printf("Entre com a opera��o a ser processada => ");
	scanf("%d", &operacao);
	
	if (operacao < 1 || operacao > 4)
	{
		printf("Voc� selecionou uma opera��o inv�lida. Programa interrompido!!!");
		return 0;
	}
	
	printf("Entre com o primeiro valor = ");
	scanf("%f", &num1);

	printf("Entre com o segundo valor = ");
	scanf("%f", &num2);
	
	switch(operacao) 
	{
		case 1:	
			result = soma(num1, num2);
			printf( "%.2f + %.2f = %.2f", num1, num2, result);
			break;
		case 2:
			result = subtracao(num1, num2);
			printf( "%.2f - %.2f = %.2f", num1, num2, result);
			break;
		case 3:
			result = divisao(num1, num2);
			printf( "%.2f / %.2f = %.2f", num1, num2, result);
			break;
		case 4:
			result = multiplicacao(num1, num2);
			printf( "%.2f * %.2f = %.2f", num1, num2, result);
			break;	
	}
	
	
}

/******************************************************


******************************************************/

float soma(float valor1, float valor2)
{
/*	float calculo;
	
	calculo = valor1 + valor;
*/
	return valor1 + valor2;
	
}
float subtracao(float valor1, float valor2)
{
/*	float calculo;
	
	calculo = valor1 - valor;
*/
	return valor1 - valor2;
	
}
float divisao(float valor1, float valor2)
{
/*	float calculo;
	
	calculo = valor1 / valor;
*/
	if(valor2==0){
		printf printf( "Imposs�vel dividir um n�mero por zero!!!");
		return 0;
	}
	return valor1 / valor2;
	
}
float multiplicacao(float valor1, float valor2)
{
/*	float calculo;
	
	calculo = valor1 / valor;
*/
	return valor1 * valor2;
	
}



