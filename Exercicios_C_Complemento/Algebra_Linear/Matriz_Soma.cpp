#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [3][3]; /* A */
	int B_matriz [3][3]; /* B */
	int Soma_matriz [3][3]; /* Soma */
	int i, j;
	int lin_a, col_a;
	int lin_b, col_b;
	printf("Digita a quantidade de linha na matriz A:");	
	scanf("%d",&lin_a);
	printf("Digita a quantidade de coluna na matriz A:");	
	scanf("%d",&col_a);
	printf("Digita a quantidade de linha na matriz B:");	
	scanf("%d",&lin_b);
	printf("Digita a quantidade de coluna na matriz B:");	
	scanf("%d",&col_b);
	if (lin_a == lin_b and col_a == col_b) {
		for (i=0; i<lin_a; i++){
			for(j=0; j<col_a; j++){ 
				printf("Digite os números da matriz A :");	
				scanf("%d",&A_matriz[i][j]);
			}
		printf ("\n");
		}
		for (i=0; i<lin_b; i++){
			for(j=0; j<col_b; j++){ 
				printf("Digite os números da matriz B :");	
				scanf("%d",&B_matriz[i][j]);
			}
		printf ("\n");
		}
		printf ("\n Exibe a Matriz A:\n");
		for (i=0; i<lin_a; i++){
			for(j=0; j<col_a; j++){ 
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
		for (i=0; i<lin_b; i++){
			for(j=0; j<col_b; j++){ 
					if(B_matriz[i][j]>0){
						printf(" +%d",B_matriz[i][j]);
					}
					else {
						printf(" %d",B_matriz[i][j]);
					}
			}
			printf ("\n");
		}
		printf ("\n Exibe a Soma das matrizes:\n");
		for (i=0; i<lin_b; i++){
			for(j=0; j<col_b; j++){
					Soma_matriz[i][j] = (A_matriz[i][j]) + (B_matriz[i][j]); 
					if(Soma_matriz[i][j]>0){
						printf(" +%d",Soma_matriz[i][j]);
					}
					else {
						printf(" %d",Soma_matriz[i][j]);
					}
			}
			printf ("\n");
		}
	}
	else{
		printf ("Impossível");
	}
}
