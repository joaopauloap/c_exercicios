#include <time.h>
#include <stdio.h>

int main(){
int tempo = clock(); //come�a a contar o tempo
printf("Aguarde . . .");
while(clock() - tempo < 5000){}
printf("\n\nSe passaram 5s");
} 
