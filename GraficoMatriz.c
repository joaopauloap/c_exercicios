#include<stdio.h>
int main(){

	int x,y;
	int i,j;
	
	printf("X:");
	scanf("%d",&x);
	printf("Y:");
	scanf("%d",&y);

	for(i=1; i<y; i++){
	for(j=1; j<x; j++){
		printf(".");
		
	}
	printf(".\n");
	}


	getchar();
	return 0;
}