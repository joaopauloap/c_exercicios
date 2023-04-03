#include <stdio.h>
#include <stdlib.h>
int main(){
	bool sair = true;
do
{	
	int x;
	int y;
	puts("Maior, Menor ou Igual? \n");
	printf("Primeiro numero(X):");
	scanf("%d",&x);
	getchar();
	printf("Segundo numero(Y):");
	scanf("%d",&y);
	getchar();
	
	if (x>y) {
	printf("\nX maior que Y");
	getchar();
	} 
	if (x<y) {
	printf("\nY maior que X");
	getchar();
	} 
	if (x==y){
		printf("X e Y iguais");
		getchar();
	}
	system("cls");
}while(sair==true);
}
