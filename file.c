#include <stdio.h>
int main(){

	FILE *arq = fopen("teste.txt", "r");
	char ch;

	while(ch != EOF){
		ch=fgetc(arq);
		putchar(ch);
	}
			
	fclose(arq);
	return 0;
}
