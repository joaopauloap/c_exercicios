#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int calc(){
system("cls");
int a;
int b;
int c;
int y;
int z;
int zz;
int rz;
int z2;
int zz2;
int x1;
int x2;

puts("Digite o valor de 'A' (Que acompanha X²)");
scanf("%d",&a);
puts("Digite o valor de 'B' (Que acompanha X)");
scanf("%d",&b);
puts("Digite o valor de 'C'");
scanf("%d",&c);

y=b*b-4*a*c;
printf("\n/\\= B²-4.a.c\n");
printf("\n>Delta: %d",y);

//----------------------------------------------
//calculo da raiz 
rz = (int)sqrt( y );

if (rz>0){

printf("\n>A raiz quadrada de Delta é: %d\n",rz);
//-----------------------------------------------
z=-(b)+rz;
zz=2*(a);
x1=z/zz;

z2=-(b)-rz;
zz2=2*(a);
x2=z2/zz2;

printf("\nx'= %d",x1);
printf("\nx''= %d",x2);
getchar();
getchar();
getchar();
}

else {
	printf("\nRaiz quadrada de Delta negativa! Conjunto Vazio.");
	getchar();
	getchar();
	return(0);
}
}


int main(){
	bool sair = true;
do{
	setlocale(LC_ALL,"Portuguese");
	system("color e");
	
	int opc;
	system("cls");
	puts("Calculando equaçoes de 2º grau");
	puts("..................................");
	puts("1)Calcular");
	puts("2)Tutorial");
	puts("3)Sobre");
	puts("4)Sair\n");
	scanf("%d",&opc);
	getchar();
	
	if (opc==1){
		calc();
	}
	
	 if (opc==2){
		system("cls");
		puts("EXEMPLO");
		puts(".....................");
		puts("Equaçao: 2x² + 7x - 11");
		puts("\n A = 2, B = 7, C = -11");
		getchar();
		main();
	}
	 if (opc==3){
		system("cls");
		printf("Programa feito por: Joao Paulo de Araujo Porto");
		getchar();
		main();
	}
	if (opc==4){
		return(0);
	}
	if (opc==0){
		system("color a");
	}
}while(sair=true);	
}
