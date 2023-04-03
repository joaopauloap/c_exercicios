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

//---------------Sem usar POW
	
/*#include<stdio.h>

int base;
int expoente;
int result=1;
int num;

int main(){

printf("Insira Base: ");
scanf("%d",&base);
printf("Insira Expoente: ");
scanf("%d",&expoente);

for(num=1;num<=expoente;num++){

result=result*base;
}


printf("Resultado: %d",result);


getchar();
return 0;
}*/

