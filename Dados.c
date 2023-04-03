#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int x;
printf("Digite um numero de 1 a 6:\n>");
scanf("%d",&x);
getchar();
printf("\nJogando dados...\n");
getchar();

int num;
int i;
     srand(time(NULL));

     for (i=0; i < 1; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 6
           num = rand()%6; 
           printf("Resultado:\n");
		   printf("%d",num); 
	
     } getchar();



if (num!=x){
	printf("\nVoce perdeu!");
	getchar();
	return(0);
}

if (num=x){
	
	printf("\nVoce ganhou!");
	getchar();
	return(0);
}



}
