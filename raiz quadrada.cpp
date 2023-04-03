#include<stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int a , b;

printf("Informe um numero: ");
scanf("%i",&a);

//calculo da raiz 
b = (int)sqrt( a );

printf("A raiz quadrada é: %i",b);
getchar();
}
