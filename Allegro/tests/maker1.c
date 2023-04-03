#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char url[]="arquivo.c";
	FILE *arq;
	char string[100];
	arq = fopen(url, "w");

		printf("Digite Parametro: ");
		gets(string);
		fprintf(arq, "#include<stdio.h>\nint main(){puts(\"%s\");getchar();}", string);
		fclose(arq);
		system("gcc arquivo.c");
	
	return 0;
}