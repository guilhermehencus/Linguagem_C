#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int matriz [3][3];
	int i, j;
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){ 
			if (i == j){
		 		matriz [i][j]=1;
		 		printf ("%d",matriz [i][j]);
			}
			else {
				matriz [i][j]=0;
				printf ("%d",matriz [i][j]);
			}
		}
	printf ("\n");
	}
			
}
