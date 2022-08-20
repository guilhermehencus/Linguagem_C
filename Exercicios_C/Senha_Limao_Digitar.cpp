#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char string[5];
	while((string[0]!='L') && (string[1]!='I') && (string[2]!='M') &&(string[3]!='A') && (string[4]!='O' ))
	{
		printf ("\n Digite a senha de 5 digitos: ");
		string[0] = getch();
		printf ("*");
		string[1] = getch();
		printf ("*");
		string[2] = getch();
		printf ("*");
		string[3] = getch();
		printf ("*");
		string[4] = getch();
		printf ("*");
		if((string[0] == 'L') && (string[1] == 'I') && (string[2] == 'M') &&  (string[3] == 'A') && (string[4] == 'O'))// senha correta é "LIMAO".
		{
			printf ("\nAcesso permitido");
		}
		else
		{
			printf ("\nAcesso negado tente novalmente!");
			getchar(); // quando precionar o "ENTER" continua o programa.
		}
	}
}
