#include <stdio.h>
#include <stdlib.h>

int stermos(){
     //sn=(a1+an).n
   	//-------------
   //       2
	
	int sn,aa,an,n,x;
	
	printf("a1: ");
	scanf("%d",&aa);
	printf("an: ");
	scanf("%d",&an);
	printf("n: ");
	scanf("%d",&n);
	
	x = aa+an*n;
	sn = x/2;
	printf("Soma dos termos: %d",sn);
	getchar();
}

int ntermos(){
	int an,aa,r;
	int w,k,l;
	
	printf("an:");
	scanf("%d",&an);
	printf("a1:");
	scanf("%d",&aa);
	printf("r:");
	scanf("%d",&r);
		
	// an=a1+(n-1).r
	
	w = r*-1; 
	k = aa+(w)-an; 
	l = k/r*-1;
	printf("\nNumero de termos: %i",l);
	getchar();

}

int anterm(){
	int an,aa,n,r,nn,rr;
	printf("a1:");
	scanf("%d",&aa);
	printf("n:");
	scanf("%d",&n);
	printf("r:");
	scanf("%d",&r);
	
	nn = n-1;
	rr = r*nn;
	an = aa + rr;
	
	printf("\nEnesimo termo: %d",an);
	getchar();
	
}

int razao(){
	// r=a2-a1
	int r,a,z;
	printf("Digite o valor do termo (diferente de 'a1'):");
	scanf("%d",&a);
	printf("Digite o valr do termo antecessor ao anterior:");
	scanf("%d",&z);
	r = a-z;
	printf("\nA razao e = %d",r);
	getchar();
}

int main(){
	int x;
	system("color e");
	printf("P.A.\n\n1-Razao\n2-Enesimo Termo\n3-Numero de Termos\n4-Soma dos Termos\n\n>");
	scanf("%d",&x);
	
	if (x==1){
		system("cls");
		razao();
	}
	
	if (x==2){
		system("cls");
		anterm();
	}
	
	if (x==3){
		system("cls");
		ntermos();
	}
	
	if (x==4){
		system("cls");
		stermos();
	}
	
	if (x!=1||2){
	getchar();
	getchar();
	system("cls");	
	main();
	}
	
}
