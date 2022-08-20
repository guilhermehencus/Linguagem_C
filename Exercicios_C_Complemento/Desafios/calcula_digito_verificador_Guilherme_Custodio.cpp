/* Programa para calcular o digito verficador ou a sigla DV */

#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int calcula_dv(char *DVV, int y);
int main()
{
	int c;
	int m;
	int count_DV=0;
	int ver_num;
	char DDV[30];
	int verificar;
	int result_DV_defi;
	char j[30];
	int h;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Guilherme Henrique Guimar�es Cust�dio\n");
	/* la�o de reperti��o, enquanto n�o digitar "FIM" o programa faz o c�lculo do Digitor 
	Verificador infinitamente */
	do {
		printf("Digite um n�mero para c�lculo Digito Verifcador (m�ximo de 30 caracteres)");
		printf(" Ou digite 'FIM' para encerrar o programa: \n");
		gets(DDV);
		m=atoi(DDV);
		if (m!=0) {
			/* o Digito Verificador vai ser c�lcula pela fun��o result_DV_defi */
			result_DV_defi=calcula_dv(DDV,strlen(DDV));
			if (result_DV_defi<=0 ){
				printf ("Aten��o!!! Valor informado inv�lido. \n");
			}
			if (result_DV_defi!=10){
				if(strlen(DDV)>30){
					for(h=0; h<30;h++){
						j[h]=DDV[h];
					}
				printf ("DV calculado com sucesso:%s-%i \n",j ,result_DV_defi);
				}
				else {
				printf ("DV calculado com sucesso:%s-%i \n",DDV ,result_DV_defi);
				}
			}
			/* Digito Verificador igual a 10 � 0 o resto */
			else if (result_DV_defi==10){
				if(strlen(DDV)>30){
					for(h=0; h<=30;h++){
						j[h]=DDV[h];
					}
				printf ("DV calculado com sucesso:%s-%i \n",j ,result_DV_defi=0);
				}
				printf ("DV calculado com sucesso:%s-%i \n",DDV ,result_DV_defi=0);
			}
		}else {
			printf ("Aten��o!!! Valor informado inv�lido. \n");
		}
	} while((strcmp(strupr(DDV),"FIM"))!=0);
	
} 
/* 
Fun��o: calcula_dv;
Objetivo: Calcular o Digito Verificador, DV;
Data de Cria��o: 25/04/2021;
Autor: Guilherme Henrique Guimar�es Cust�dio;
Par�metros: DVV, transfere os caracteres digitados pelo usu�rio, e o y, contador inteiro
que tem a quantidade de caracteres digitados usado para consultar o �ndice da v�riavel DVV.
*/
int calcula_dv(char *DVV, int y) {
	int i; 
	int count_multi=2;
	int soma_DV=0;
	int count_zero=0;
	int varia_DV=0;
	int divi_result;
	int result_DV;
	if(y>30){
	y=30;
	}
	for(i=y-1; i>=0;i--){
		varia_DV = DVV[i] - '0'; /* Convertendo de string em inteiro */
		if(varia_DV!=0 and varia_DV>0){
			soma_DV= soma_DV + (varia_DV *count_multi);
			count_multi++;
			if(count_multi>9){
				count_multi=2;
			}		
		}
		
	}
	divi_result= (int) (soma_DV*10)/11;
	result_DV=(soma_DV*10) - (divi_result*11);
	if(result_DV== NULL or result_DV<0 ){
		return  -1;		
	}
	if(result_DV==10){
		return  result_DV;		
	}
	else{
		return  result_DV;		
	} 
}

