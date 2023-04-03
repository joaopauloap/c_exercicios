#include <stdio.h>
#include <math.h>
int main(){
	int x,base,expoente;
	
	printf("base:");
	scanf("%d",&base);
	printf("expoente:");
	scanf("%d",&expoente);
	
	x = pow(base,expoente);
	printf("\n%d elevado a %d = %d",base,expoente,x);
	getchar();	
}
