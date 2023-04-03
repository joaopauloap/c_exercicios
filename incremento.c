#include<stdio.h>
int main(){

int x=5,y=5;
int j,k;

j=x++;//na forma posfixa, o valor da variável é usado e, depois, ela é alterada.
k=++y;//na forma prefixa, a variável é alterada e, depois, seu valor é usado.

j=x++;
k=++y;

printf("%d %d",j,k);


getchar();
return 0;
}