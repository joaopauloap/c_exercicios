#include <stdio.h>
#include <stdlib.h>
int main(){
	bool sair = true;
	do{
	
char string[100]; /* String, ate' 99 caracteres */
 int i, cont;
 printf("\n\nDigite uma frase: ");
 gets(string); /* Le a string */
 printf("\n\nFrase digitada:\n%s", string);
 
 
 cont = 0;
 for (i=0; string[i] != '\0'; i=i+1)
 {

 cont = cont +1; 
 }
 printf("\nNumero de caracteres: %d", cont);
	 getchar();
	 system("cls");
} while (sair == true);
}
