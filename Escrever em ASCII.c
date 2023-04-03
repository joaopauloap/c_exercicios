#include <stdio.h>
#include <stdlib.h>

int main(){
	bool sair = true;
do
{
	
	int q,w,e,r,t,y,u,i,o,p;
	char a,s,d,f;
	
	printf("\n>");
	scanf("%d %d %d %d %d %d %d %d %d %d",&q,&w,&e,&r,&t,&y,&u,&i,&o,&p);
	printf("%c%c%c%c%c%c%c%c%c%c",q,w,e,r,t,y,u,i,o,p);
	getchar();
	
	printf("\n>>");
	scanf("%c %c %c %c",&a,&s,&d,&f);
	printf("%d %d %d %d",a,s,d,f);
	getchar();
	
}while(sair=true);
}
