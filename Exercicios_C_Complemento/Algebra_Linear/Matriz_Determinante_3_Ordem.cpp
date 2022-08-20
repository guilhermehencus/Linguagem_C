/*
Determinante de 3ºordem automatizado
*/
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int Ordem_3_Determinante(int Mat_A[][3]);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [3][3]; /* A */
	int i, j;
	/* Ler os valores da Matriz A */
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			printf("Digite os números da matriz A :");	
			scanf("%d",&A_matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz A:\n");
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			if(A_matriz[i][j]>0){
				printf(" +%d",A_matriz[i][j]);
			}
			else {
				printf(" %d",A_matriz[i][j]);
			}
		}
		printf ("\n");
	}
	printf("det(A): %d  \n", Ordem_3_Determinante(A_matriz));
}
/* Função para calcular o Determinante de 3º Ordem */
int Ordem_3_Determinante(int Mat_A[][3]) {
	int matriz_det [3][5];
	int acumular_valor_positivo=0;
	int acumular_valor_negativo=0;
	int linha, coluna;
	int calculo_determinante;
	for (linha=0; linha<3; linha++){
		for(coluna=0; coluna<5; coluna++){ 
			if(coluna>2){
				matriz_det [linha][coluna]= Mat_A[linha][coluna-3];
			}
			else {
				matriz_det [linha][coluna]= Mat_A[linha][coluna];
			} 
		}
	}
	for (linha=0; linha<1; linha++){
		for(coluna=0; coluna<5; coluna++){ 
			if(coluna>2){
				acumular_valor_negativo = acumular_valor_negativo - (matriz_det [linha][coluna]*matriz_det [linha + 1][coluna - 1]*matriz_det [linha + 2][coluna - 2]);
			}
			else if(coluna==2) {
				acumular_valor_positivo = acumular_valor_positivo + (matriz_det [linha][coluna]*matriz_det [linha + 1][coluna + 1]*matriz_det [linha + 2][coluna + 2]);
				acumular_valor_negativo = acumular_valor_negativo - (matriz_det [linha][coluna]*matriz_det [linha + 1][coluna - 1]*matriz_det [linha + 2][coluna - 2]);
			}
			else {
				acumular_valor_positivo = acumular_valor_positivo + (matriz_det [linha][coluna]*matriz_det [linha + 1][coluna + 1]*matriz_det [linha + 2][coluna + 2]);
			}
		}
		printf ("\n");
	}
	calculo_determinante = acumular_valor_positivo + (acumular_valor_negativo);
	return calculo_determinante;
}
