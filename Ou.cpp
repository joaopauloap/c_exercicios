#include <stdio.h>
int main(){
	
	int z,x;
	
	scanf("%i %i",&z,&x);
	
	if (z == 0 || x == 0)
	{
		printf("BYE");
		getchar();
		return(0);
	} 	
	
	printf("%c%c",z,x);
	
	getchar();
	getchar();
}
