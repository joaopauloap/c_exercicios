#include <stdio.h> 
#include <conio.h> 
#include <winsock.h> 
#include <windows.h>
#include <stdlib.h>

WSADATA data; 
SOCKET winsock; 
SOCKADDR_IN sock; 
char buffer[1024];
char buffer2[1024];
int bytes;

	
int main(){ 
FILE *f = fopen("motd.txt", "r");
char palavra[1024];
while (fscanf(f, "%s ", palavra) == 1)

fclose(f);

system("color a");
system("title Server");
printf("%s ",palavra); 
printf("\nAguardando Conexao de cliente...\n");


//--------------------------------------------------------------------ERROS
if(WSAStartup(MAKEWORD(1,1),&data)==SOCKET_ERROR){ 
printf("Erro ao inicializar o winsock"); 
return 0; 
} 
if((winsock = socket(AF_INET,SOCK_STREAM,0))==SOCKET_ERROR){ 
printf("Erro ao criar socket"); 
return 0; 
} 
sock.sin_family=AF_INET; 
sock.sin_port=htons(1234); 
if(bind(winsock,(SOCKADDR*)&sock,sizeof(sock))==SOCKET_ERROR){ 
printf("Erro colocar utilizar a funcao BIND"); 
return 0; 
}
//-------------------------------------------------------------------FIM ERROS 
listen(winsock,1); 
while((winsock = accept(winsock,0,0))==SOCKET_ERROR) 
{ 
Sleep(1); 
} 
//---------------------------------------------------------------ENVIAR MOTD
strcat(palavra,"\r\n");
send(winsock,palavra,strlen(palavra),0);
//-----------------------------------------------------------------
printf("Cliente conectado!\n\n"); 

while(1)
{
Sleep(1);
memset(buffer2,0,1024);
bytes=recv(winsock,buffer2,1024,0);
if(bytes==-1){
	printf("Conexao perdida");
	getch();
return 0;
}
printf(buffer2);

printf("\n>");
gets(buffer);
printf("\nClient Diz: ");
strcat(buffer,"\r\n");
send(winsock,buffer,strlen(buffer),0);

}
getch();
closesocket(winsock);
WSACleanup();
return 0;
}