#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
void rolllivretwo(){
	bool loop = true;
	do{
	printf("Rolagem Livre de Dados\n");
	printf("-------------------------------------------------------------------------------\n\n");
	printf("Rolar Dados?");

	int num;
	int i;
     srand(time(NULL));

     for (i=0; i < 1; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 6
           num = rand()%7;
           
     }

//-------------------------------------------------------------------   
	getchar();

	printf("        -Rolando dados . . .\n");       
	sleep(5);

  	int nume;
	int ii;
	
     srand(time(NULL));
	
     for (ii=0; ii < 1; ii++)
     {
           nume = rand()%7;
     }


     if (num==0){
		num=1;
	 }
     
     if (num==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n"); 
	 }
     
     if (num==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
	 }
	 if (num==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");  
	 }
	 if (num==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n"); 
	 }
     
      if (num==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");  
	 }
	 
	  if (num==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n"); 
	 }
//-----------------------------------------------------
	printf("\n");
	 if (nume==0){
		nume=1;
	 }
	if (nume==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n");
	 }
     
     if (nume==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
	 }
	 if (nume==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");
	 }
	 if (nume==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
	 }
     
      if (nume==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");
	 }
	 
	  if (nume==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
	 }

	char opc;
	printf("\n\n\n  Rolar novamente? s/n: ");
	scanf("%s",&opc);
	
	if(opc=='s'){
	}
	
	if (opc=='n'){
		getchar();
		return;
		getchar();
	}
	getchar();
	system("cls");
}	while(loop=true);
}

//****************************************************************************************************************************************************************************************

void rolllivre(){
	bool loop = true;
	do{
	printf("Rolagem Livre de Dados\n");
	printf("-------------------------------------------------------------------------------\n\n");
	printf("Rolar Dado?");

	int num;
	int i;
     srand(time(NULL));

     for (i=0; i < 1; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 6
           num = rand()%7;
           
     }
//-------------------------------------------------------------------   
	getchar();
	printf("           -Rolando dado . . .\n\n");     
     if (num==0){
		num=1;
     
	 }
     
     if (num==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n");
     
	 }
     
     if (num==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
  
	 }
	 if (num==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");
     
	 }
	 if (num==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }
     
      if (num==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");
     
	 }
	 
	  if (num==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }

	char opc;
	printf("\n\n\n  Rolar novamente? s/n: ");
	scanf("%s",&opc);
	
	if(opc=='s'){
	}
	
	if (opc=='n'){
		getchar();
		return;
		getchar();
	}
	getchar();
	system("cls");
}while(loop=true);
}
//****************************************************************************************************************************************************************************************
void rlivre(){
	int x;
	char apos, apost;
	
	printf("Rolagem Livre de Dados\n");
	printf("-------------------------------------------------------------------------------\n\n");
	
	printf("\nRolar quantos dados? [MAX:2] :");
	scanf("%d",&x);
	

	if (x==1){
	system("cls");
	rolllivre();	
	}
	
	if (x==2){
	system("cls");
	rolllivretwo();	
	}
	
		if (x!=1||2){
		system("cls");
		return;
	}
}

//**************************************************************************************************************************************************************************************************************
void rolltwo(){

		char apos[5];
		char apost[7];
		printf("Modo APOSTA\n-------------------------------------------------------------------------------\n\n");
	printf("Nome do Apostador 1:"); scanf("%s",&apos);
	printf("Nome do Apostador 2:"); scanf("%s",&apost);
	system("cls");
		int xa = 0;
		int zu = 0;
		
		bool sair = true;
	do{		
		
		int q,w;
		
	printf("Modo APOSTA                                                %s:%d | %s:%d\n-------------------------------------------------------------------------------\n\n",apos,xa,apost,zu);
	
	printf("Aposta de %s:",apos); scanf("%d",&q);
	printf("Aposta de %s:",apost); scanf("%d",&w);
	printf("\n");
	int num;
	int i;
     srand(time(NULL));

     for (i=0; i < 1; i++)
     {
         
           num = rand()%7;
     }
//----------------------------------------- 
printf("Rolando dados . . .\n");     
sleep(5);

	int nume;
	int ii;
	
     srand(time(NULL));
	
     for (ii=0; ii < 1; ii++)
     {

           nume = rand()%7;
     }
     
     
    if (num==0){
		num=1;
     
	 }
     
     if (num==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n");
     
	 }
     
     if (num==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
  
	 }
	 if (num==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");
     
	 }
	 if (num==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }
     
      if (num==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");
     
	 }
	 
	  if (num==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }
	 
	 printf("\n");
	 if (nume==0){
		nume=1;
	 }
     
     if (nume==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n");
	 }
     
     if (nume==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
	 }
	 if (nume==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");
	 }
	 if (nume==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
	 }
     
      if (nume==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");
	 }
	 
	  if (nume==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
	 }
	 
//---------------------------------------------

	 if (q==num+nume){

	 	printf("                                            Apostador %s ganhou! \n",apos);

		 xa=xa+1; 
	 }
	 
	  if (w==num+nume){
	 	printf("                                            Apostador %s ganhou! \n",apost);
		 zu=zu+1; 
	 }
	 
	char opc;
	printf("\n\n\n  Rolar novamente? s/n: ");
	scanf("%s",&opc);
	
	if(opc=='s'){
	}
	
	if (opc=='n'){
		getchar();
		return;
		getchar();
	}

	getchar();
	system("cls");
}while(sair=true);
}

//****************************************************************************************************************************************************************************************

void roll(){
		char apos[5];
		char apost[7];
		printf("Modo APOSTA\n-------------------------------------------------------------------------------\n\n");
	printf("Nome do Apostador 1:"); scanf("%s",&apos);
	printf("Nome do Apostador 2:"); scanf("%s",&apost);
	system("cls");
		int xa = 0;
		int zu = 0;
		
		bool sair = true;
	do{		
		
		int q,w;
		
	printf("Modo APOSTA                                                %s:%d | %s:%d\n-------------------------------------------------------------------------------\n\n",apos,xa,apost,zu);
	
	printf("Aposta de %s:",apos); scanf("%d",&q);
	printf("Aposta de %s:",apost); scanf("%d",&w);
	printf("\n");
	int num;
	int i;
     srand(time(NULL));

     for (i=0; i < 1; i++)
     {
           // gerando valores aleatórios na faixa de 0 a 6
           num = rand()%7;
     }
//-------------------------------------------------------------------   
 

printf("Rolando dados . . .\n");     
     if (num==0){
		num=1;
     
	 }
     
     if (num==1){
     	printf(" _________\n");
     	printf("|         |\n");
		printf("|    O    |\n");
		printf("|         |\n");
		printf("|_________|\n");
     
	 }
     
     if (num==2){
     	printf(" _________\n");
		printf("| O       |\n");
		printf("|         |\n");
		printf("|       O |\n");
		printf("|_________|\n");
  
	 }
	 if (num==3){
	 	printf(" _________\n");
     	printf("| O       |\n");
		printf("|    O    |\n");
		printf("|       O |\n");
		printf("|_________|\n");
     
	 }
	 if (num==4){
	 	printf(" _________\n");
     	printf("| O     O |\n");
		printf("|         |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }
     
      if (num==5){
      	printf(" _________\n");
        printf("| O     O |\n");
		printf("|    O    |\n");
		printf("| O     O |\n");
        printf("|_________|\n");
     
	 }
	 
	  if (num==6){
	  	printf(" _________\n");
     	printf("| O     O |\n");
		printf("| O     O |\n");
		printf("| O     O |\n");
		printf("|_________|\n");
     
	 }
//----------------------------------------------------------------------------------------	 

	 if (q==num){

	 	printf("                                            Apostador %s ganhou! \n",apos);

		 xa=xa+1; 
	 }
	 
	  if (w==num){
	 	printf("                                            Apostador %s ganhou! \n",apost);
		 zu=zu+1; 
	 }
	 

	 
	char opc;
	printf("\n\n\n  Rolar novamente? s/n: ");
	scanf("%s",&opc);
	
	if(opc=='s'){
	}
	
	if (opc=='n'){
		getchar();
		return;
		getchar();
	}

	getchar();
	system("cls");
}while(sair=true);
}

//****************************************************************************************************************************************************************************************

void aposta(){
	int x;
	char apos, apost;
	
	printf("Modo APOSTA\n");
	printf("-------------------------------------------------------------------------------\n\n");
	
	printf("\nRolar quantos dados? [MAX:2] :");
	scanf("%d",&x);
	

	if (x==1){
	system("cls");
	roll();
	}
	
	if (x==2){
	system("cls");
	rolltwo();
	}
	
		if (x!=1||2){
		system("cls");
		return;
	}
}

//****************************************************************************************************************************************************************************************

int main(){
	bool loop = true;
	do{
	
	setlocale(LC_ALL, "Portuguese");
	int x;
	system("color e");
	printf("                                  GAME OF BOZóS\n-------------------------------------------------------------------------------\n\n");
	printf("1)Modo Aposta \n2)Rolagem livre\n3)--Bloqueado--\n4)Sair");
	printf("\n\n >");
	scanf("%d",&x);
	

	if (x==1){
		system("cls");
		aposta();
	}
	
	if (x==2){
		system("cls");
		rlivre();
	}
	if (x==4){
		bool loop = false;
		return 0;
	}
	if (x!=1||2||4){
		system("cls");
		main();
	}
}while(loop=true);

}
