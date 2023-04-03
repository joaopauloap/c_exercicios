#include <stdio.h>
#include <stdlib.h>
 int main ()
 {
 	bool sair=true;
 	
do
{
 int pes;
 int alt;
 float x;
 float altura;
 float z;
 puts("IMC");
  printf("\nOBS: Digite somente numeros e sem pontos/virgulas.\n");
 puts("-------------------------------------------------------\n");

 printf ("Peso:");
 scanf ("%d",&pes);
 getchar();
 printf("Altura:");
 scanf("%d",&alt);
 altura=alt*alt;
 x=pes/altura;
 z=x*10000;
 //printf("\nResultado:%f\n",z);
  if (z>18.000000){
printf("\n>Resultado: Peso normal");
 }
 
 if(z<18.000000){
 	printf("\n>Resultado: Abaixo do peso normal");
 }
 
 getchar();
 getchar();
 system("cls");
}while(sair==true);
  } 

