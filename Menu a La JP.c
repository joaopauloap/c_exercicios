#include <stdio.h>
#include <stdlib.h>

void opccc(){
		bool loop = true;
	
	do {
		
	printf("\nOPCAO 3\n");
	int x;
	printf(">"); scanf("%d",&x);
	getchar();
	system("cls");
	if(x==0){
		return;
	}
	
}while(loop=true);
}

void opcc(){
		bool loop = true;
	
	do {
		
	printf("\nOPCAO 2\n");
	int x;
	printf(">"); scanf("%d",&x);
	getchar();
	system("cls");

	if(x==0){
		return;
	}

	
}while(loop=true);
}

void opc(){
	bool loop = true;
	
	do {
		
	printf("\nOPCAO 1\n");
	int x;
	printf(">"); scanf("%d",&x);
	getchar();
	system("cls");
	if(x==0){
		return;
	}
	
}while(loop=true);
}

int main(){
	
bool loop = true;
do {
		int z;
		
	printf("MENU\n");
	printf("\n1)OPCAO 1");
	printf("\n2)OPCAO 2");
	printf("\n3)OPCAO 3");

	printf("\n >");	scanf("%d",&z);
	getchar();
	system("cls");
	
	if (z==1){
		opc();
}

	if (z==2){
		opcc();
}	

	if (z==3){
		opccc();
}
			
}while(loop=true);
	return(0);
}
