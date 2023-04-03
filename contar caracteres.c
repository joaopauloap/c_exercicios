#include<stdio.h>
#include<strings.h>
int main(){
char string[100];
int tamanho;

printf("Digite uma palavra: ");
gets(string);

tamanho = strlen(string);
printf("Quantidade de caracteres: %d ",tamanho);
getchar();
return 0;
}
