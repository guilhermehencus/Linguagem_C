/*
Considere A3x4 e B4x5 duas matrizes. Faça um algoritmo que leia as matrizes e calcule: A.B
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
int Operacao_Produto(int Mat_A[][4],int Mat_B[][5],int x_linha, int y_coluna);
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [3][4]; /* A */
	int B_matriz [4][5]; /* B */
	int i, j;
	int Produto_matriz [3][5]; /* Produto */
	/* Ler os valores da Matriz A */
	for (i=0; i<3; i++){
		for(j=0; j<4; j++){ 
			printf("Digite os números da matriz A :");	
			scanf("%d",&A_matriz[i][j]);
		}
		printf ("\n");
	}
	/*Ler os valores da Matriz B */
	for (i=0; i<4; i++){
			for(j=0; j<5; j++){ 
				printf("Digite os números da matriz B :");	
				scanf("%d",&B_matriz[i][j]);
			}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz A:\n");
	for (i=0; i<3; i++){
		for(j=0; j<4; j++){ 
			if(A_matriz[i][j]>0){
				printf(" +%d",A_matriz[i][j]);
			}
			else {
				printf(" %d",A_matriz[i][j]);
			}
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz B:\n");
	for (i=0; i<4; i++){
		for(j=0; j<5; j++){ 
			if(B_matriz[i][j]>0){
				printf(" +%d",B_matriz[i][j]);
			}
			else {
				printf(" %d",B_matriz[i][j]);
			}
		}
		printf ("\n");
	}
	/*Fazer o produto da Matriz */
	for (i=0; i<3; i++){
		for(j=0; j<5; j++){
			/* fazer as operações para descobrir a primeira linha */
			Produto_matriz [i][j] = Operacao_Produto(A_matriz,B_matriz,i, j);
			printf("Linha %d e Coluna %d: %d \n",i+1, j+1, Produto_matriz[i][j]);	
		}
	}
	/* Mostrar Matriz Produto */
	printf ("\n Exibe a Matriz Produto:\n");
	for (i=0; i<3; i++){
		for(j=0; j<5; j++){ 
			if(Produto_matriz[i][j]>0){
				printf(" +%d",Produto_matriz[i][j]);
			}
			else {
				printf(" %d",Produto_matriz[i][j]);
			}
		}
		printf ("\n");
	}
}
/* Função para fazer as operações de achar o produto da nova matriz entre a Matriz A e B
   Matriz A Linha, controller_coluna - y_coluna. Para não deslocar a posição da coluna já que fica no loop da coluna e soma-se;
   Matriz B Coluna, controller_linha + (y_coluna - x_linha)) Não deslocar tanto a coluna, tanto a linha da matriz B, assim seguindo 
    a ordem da multiplicação na vertical	
 */
int Operacao_Produto(int Mat_A[][4],int Mat_B[][5], int x_linha, int y_coluna) {
	int controller_linha;
	int controller_coluna;
	int acumular_valor=0;
	for (controller_linha=x_linha; controller_linha<=x_linha; controller_linha++){
		for(controller_coluna=y_coluna; controller_coluna< (4 + y_coluna); controller_coluna++){
			 printf("Valor: %d * %d = %d \n",Mat_A[controller_linha][(controller_coluna -y_coluna)], Mat_B[(controller_coluna -y_coluna)][(controller_linha + (y_coluna - x_linha))],Mat_A[controller_linha][(controller_coluna -y_coluna)]*Mat_B[(controller_coluna -y_coluna)][(controller_linha + (y_coluna - x_linha))] );
			acumular_valor = acumular_valor + (Mat_A[controller_linha][(controller_coluna -y_coluna)]*Mat_B[(controller_coluna -y_coluna)][(controller_linha + (y_coluna - x_linha))]);
		}
	}
	return acumular_valor;
}
