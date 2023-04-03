#include<stdio.h>

int main(){

    int bin = 0b00110010;

    printf("Nibble Mais significativo: %d\n", bin/16);
    printf("Nibble Menos significativo: %d\n", bin & 0b00001111);
   

}
