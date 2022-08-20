#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int C_matriz [3][3];
	int A_matriz [3][3]; /* Triangulo_Inferior */
	int B_matriz [3][3]; /* Triangulo_Superior */
	int i, j;
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			printf("Digita um número:");	
			scanf("%d",&C_matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz original:\n");
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
				if(C_matriz[i][j]>0){
					printf(" +%d",C_matriz[i][j]);
				}
				else {
					printf(" %d",C_matriz[i][j]);
				}
		}
		printf ("\n");
	}
	printf ("\n Exibe o Triangulo Inferior:\n");
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			if (i >= j){
				if(i<j){
					A_matriz[i][j] = C_matriz[i][j];
					printf("  +%d",A_matriz[i][j]);
				}
				else if(C_matriz[i][j]>0){
					printf(" +%d",A_matriz[i][j] = C_matriz[i][j]);
				}
				else {
					printf(" %d",A_matriz[i][j] = C_matriz[i][j]);
				}
			}
			else {
				printf("  0");
			}
		}
		printf ("\n");
	}
		printf ("\n Exibe o Triangulo Superior:\n");
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			if (i <= j){
				if(i>j){
					A_matriz[i][j] = C_matriz[i][j];
					printf("  +%d",A_matriz[i][j]);
				}
				else if(C_matriz[i][j]>0){
					printf(" +%d",A_matriz[i][j] = C_matriz[i][j]);
				}
				else {
					printf(" %d",A_matriz[i][j] = C_matriz[i][j]);
				}
			}
			else {
				printf("  0");
			}
		}
		printf ("\n");
	}
}
