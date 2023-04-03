#include <stdio.h>
int main(){
	char x[10];
	char y;
	gets(x);
	printf("Voce digitou: %s",x);
	getchar();
	printf("Digite uma letra:");
	scanf("%c",&y);
	x[1] = y;
	printf("Nova string: %s",x);
	getchar();
}

