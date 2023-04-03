 #include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
int main ()
{
int i,j,vet[N][N],lin,col;
printf("Matriz Tamanho: Linhas X Coluna\n");
scanf("%d %d",&lin,&col);//Define tamanho da linhas e Coluna dando entrada nos valores
//Valores pra Matriz
for(i=0;i<lin;i++){ 
for(j=0;j<col;j++){
system("cls");
printf("Entre com os valores da sua matriz:");
scanf("%d",&vet[i][j]); 
}
}
//Impressão da matriz
system("cls");
for(i=0;i<lin;i++){printf("\n Linha |%d| ",i);
for(j=0;j<col;j++){ 
printf("%5.0d ",vet[i][j]);
}
}
}
