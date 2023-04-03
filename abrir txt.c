#include <stdio.h>
int main(){
	
	char url[]="C:/arquivo.txt";
	char ch;
	FILE *arq;
	
	arq = fopen(url, "r"); 

	while( (ch=fgetc(arq))!= EOF )
	putchar(ch);
			
	fclose(arq);
	return 0;
}
