#include<stdio.h>
int main(){

int num;
int fatorial=1;
int i;

printf("Insira numero: ");
scanf("%d",&num);

for(i=num;i>=1;i--){
//5 4 3 2 1
printf("%d ",i);
fatorial=fatorial*i;

}

printf("\nFatorial do numero: %d",fatorial);

getchar();
return 0;
}