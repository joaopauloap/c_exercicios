#include <stdio.h>
#include <windows.h>
 
 int rect(int x,int y){
	int i,j,n,m;
	
	for(i=1;i<=y;i++){
		for(j=1;j<=x;j++){
		printf("%c",219);
	}
	printf("\n");
	}
	
}
//Função gotoxy
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 
main(){
  system("cls");
   
  gotoxy(5, 3);
  
  rect(10,5);
  }