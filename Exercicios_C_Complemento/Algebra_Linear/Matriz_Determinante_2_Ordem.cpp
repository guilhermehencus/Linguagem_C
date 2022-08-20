/*
Considere A2x2. Faça um algoritmo que leia a matriz A e calcule: det(A)
*/
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int Ordem_2_Determinante(int Mat_A[][2]);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [2][2]; /* A */
	int i, j;
	int Determinante; /* Determinante */
	/* Ler os valores da Matriz A */
	for (i=0; i<2; i++){
		for(j=0; j<2; j++){ 
			printf("Digite os números da matriz A :");	
			scanf("%d",&A_matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz A:\n");
	for (i=0; i<2; i++){
		for(j=0; j<2; j++){ 
			if(A_matriz[i][j]>0){
				printf(" +%d",A_matriz[i][j]);
			}
			else {
				printf(" %d",A_matriz[i][j]);
			}
		}
		printf ("\n");
	}
	/* Mostrar o determinante */
	printf("det(A): %d  \n", Ordem_2_Determinante(A_matriz));
}
/* Função para calcular o Determinante de 2º Ordem */
int Ordem_2_Determinante(int Mat_A[][2]) {
	int calculo_determinante;
	int i_det;
	int j_det;
	for (i_det=0; i_det<1; i_det++){
		for(j_det=0; j_det<1; j_det++){ 
		printf("Conta  det(A): (%d)*(%d) - (%d)*(%d) \n",Mat_A[i_det][j_det], Mat_A[i_det+1][j_det+1],Mat_A[i_det+1][j_det],Mat_A[i_det][j_det+1]);
		calculo_determinante = (Mat_A[i_det][j_det]*Mat_A[i_det+1][j_det+1]) - (Mat_A[i_det+1][j_det]*Mat_A[i_det][j_det+1]); 
		}
	}
	return calculo_determinante;
}
