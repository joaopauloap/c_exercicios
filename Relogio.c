#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
int x=00;
int y=00;
int z=00;
do{
   system("cls");
   x=x+1;
   printf("%d:%d:%d",z,y,x);
   sleep(1);

   if(x==60){
    x=0;
    y=y+1;
   }

   if (y==60){
    y=0;
    z=z+1;
   }

}while(y<60);
return 0;
}
