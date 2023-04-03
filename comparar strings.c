#include<stdio.h>
int main(){
	
	char string[100];
do{
	printf("\nVoce diz: ");
	gets(string);
	
	if(strcmp(string,"ola")==0){
		printf("Alguem responde: Hello\n");

		
	}else{
		puts("Obs: Diga \"ola\"\n");

	}
	
}while(1);
return 0;
}