#include <stdio.h>
int main(){
   FILE *arq;
   char string[100];
   int i;
   
   arq = fopen("arquivo.txt","w");   		/* Arquivo ASCII, para escrita */
   printf("Escreva:");
   gets(string);
   
   for(i=0; string[i]; i++) putc(string[i], arq); /* Grava a string, caractere a caractere */
   
   fclose(arq);
   return 0;
}
