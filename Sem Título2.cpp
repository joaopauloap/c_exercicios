#include <stdio.h>
int main(){
	int z,x,count;
	printf("Crescente\nDe:");
	scanf("%d",&z);
	printf("Ate:");
	scanf("%d",&x);
	printf("\n");
		
	for(count=(z);count<=(x);count=count+1)	printf("%d ",count);
	getchar();
	
	printf("\n\nDecrescente\nDe:");
	scanf("%d",&z);
	printf("Ate:");
	scanf("%d",&x);
	printf("\n");
		
	for(count=(z);count>=(x);count=count-1)	printf("%d ",count);
	getchar();
	
	
}
