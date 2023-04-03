#include <stdio.h>
#include <stdlib.h>
int main(){
	bool sair = false;
	do {
	system("color e");
	printf("Selecione uma operacao matematica: \n");
	printf("\n");
	printf("1)Adicao \n");	
	printf("2)Subtracao \n");
	printf("3)Multiplicacao \n");
	printf("4)Divisao \n");
	printf("\n >");
	
	int v;
	
	scanf("%d",&v);
	if (v == 1){
		
	system("cls");
	printf("#Soma \n");
	printf("\n");		
  	//soma
  	
	int x;
	int y;
	printf("Digite o primeiro valor:");
	scanf("%d",&x);
	getchar();
	printf("Digite o segundo valor:");
	scanf("%d",&y);
	getchar();
	
	printf("\n Resultado: %d",x+y);
	getchar();
	system("cls");	
	}
	if (v == 2)
	{
		system("cls");
	printf("#Subtracao \n");
	printf("\n");		
  	//subtracao
  	
	int x;
	int y;
	printf("Digite o primeiro valor:");
	scanf("%d",&x);
	getchar();
	printf("Digite o segundo valor:");
	scanf("%d",&y);
	getchar();
	
	printf("\n Resultado: %d",x-y);
	getchar();	
	system("cls");	
	}
	
	if (v == 3)
	{
		system("cls");
	printf("#Multiplicacao \n");
	printf("\n");		
  	//multiplicacao
  	
	int x;
	int y;
	printf("Digite o primeiro valor:");
	scanf("%d",&x);
	getchar();
	printf("Digite o segundo valor:");
	scanf("%d",&y);
	getchar();
	
	printf("\n Resultado: %d",x*y);
	getchar();
	system("cls");
	}
	
	if (v == 4)
	{
		system("cls");
	printf("#Divisao \n");
	printf("\n");		
  	//divisao
  	
	int x;
	int y;
	printf("Digite o primeiro valor:");
	scanf("%d",&x);
	getchar();
	printf("Digite o segundo valor:");
	scanf("%d",&y);
	getchar();
	
	printf("\n Resultado: %d",x/y);
	getchar();
	system("cls");
	}
} while (sair == false);
	
}
