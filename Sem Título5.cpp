#include <stdio.h>
#include <stdlib.h>
int main() {
	bool sair = true;
	
	do 	
{		
	char str[10] = "joao";
	char x[5];
	int y;
	printf("%s \n",str);
	puts("");
	printf("Insira a letra:");
	scanf("%s",&x);
	printf("Insira o numero:");
	scanf("%d",&y);
	
	if (y==1) {
	str[0] = x[0];
	system("cls");
	printf("%s",str);
	getchar();
	}
	
	if (y==2) {
	str[1] = x[0];
	system("cls");
	printf("%s",str);
	getchar();
	}
	
	if (y==3) {
	str[2] = x[0];
	system("cls");
	printf("%s",str);
	getchar();
	}
	
		if (y==4) {
	str[3] = x[0];
	system("cls");
	printf("%s",str);
	getchar();
	}	
	getchar();
	system("cls");
} while(sair==true);
}
