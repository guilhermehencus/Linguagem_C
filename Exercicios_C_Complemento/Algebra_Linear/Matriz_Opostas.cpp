#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [5][5];
	int B_matriz [5][5];
	int i, j;
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){ 
			printf("Digita um número:");	
			scanf("%d",&A_matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz B:\n");
	for (i=0; i<5; i++){
		for(j=0; j<5; j++){ 
			if(A_matriz[i][j]==0){
				B_matriz[i][j] = A_matriz[i][j];
				printf("  %d",B_matriz[i][j]);
			}
			else if(A_matriz[i][j]>0){
				printf(" %d",B_matriz[i][j] = -A_matriz[i][j]);
			}
			else {
				printf(" +%d",B_matriz[i][j] = A_matriz[i][j]*(-1));
			}
		}
		printf ("\n");
	}
}
