 #include <stdio.h>
#include <stdlib.h> 
 int letnum(){
 	system("cls");
	 char Ch;
	 printf(">");
 scanf("%c",&Ch);
 printf ("%d\n",Ch);
 getchar(); 	
 getchar();
 system("cls");
 }
 
 int numlet()
 {
 	system("cls");
 	int x;
 	char ch;
 	printf(">");
 	scanf("%d",&x);
 	printf("%c\n",x);
 	getchar();
 	getchar();
 	system("cls");
 }
 
 
 int main ()
 {
 	bool sair=true;
 	do {
 	int x;
 printf("ASCII CODE \n \n");
 printf("1) Letra > Codigo \n");
 printf("2) Codigo > Letra \n \n");
 printf(">");
 scanf("%d",&x);
 getchar();
 if (x==1)
 {
 	letnum();
 }
 
 if (x==2)
{
	numlet();
}
} while(sair==true);
  }
 
 

