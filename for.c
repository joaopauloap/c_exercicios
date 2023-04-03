#include <stdio.h>
int main(){
	int count;
	for (count=1;count<=10;count=count+1) printf("%d ",count);
	puts("");
	for (count=10;count>=1;count=count-1) printf("%d ",count);
	getchar();
}
