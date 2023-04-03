#include <stdio.h>
#include <winsock.h>
#include <conio.h>
#include <string.h>

WSADATA data;
SOCKET winsock;
SOCKADDR_IN sock;
char buffer[1024];
char buffer2[1024];
int bytes;
int main(){
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
sock.sin_addr.s_addr=inet_addr("187.41.54.20");
if(connect(winsock,(SOCKADDR*)&sock,sizeof(sock))==SOCKET_ERROR){
printf("Erro ao se conectar");
return 0;
}
printf("Conectado!\n");
while(1)
{
Sleep(1);
printf("Digite uma mensagem:\n");
gets(buffer);
strcat(buffer,"\r\n");
send(winsock,buffer,strlen(buffer),0);
memset(buffer2,0,1024);
bytes=recv(winsock,buffer2,1024,0);
if(bytes==-1){
	printf("Conexão perdida");
	getch();
return 0;
}
printf(buffer2);

}
getch();
closesocket(winsock);
WSACleanup();
return 0;
}