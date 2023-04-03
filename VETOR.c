#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
 
int main(){
    int *vetor; //definindo o ponteiro vetor
    int i, num_componentes;    
     
    printf("Informe o numero de componentes do vetor: ");
    scanf("%d", &num_componentes);
  
    vetor = malloc(num_componentes * sizeof(int));  
      
    //Armazenando os dados em um vetor
    for (i = 0; i < num_componentes; i++)
    {
		printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
		scanf("%f",&vetor[i]);
		//vetor[i] = i+1;
	 
    }   
     
   // ------ Percorrendo o vetor e imprimindo os valores ----------
   printf("\n*********** Valores do vetor dinamico ************\n\n");
    
   for (i = 0;i < num_componentes; i++)
   {
       printf("%d\n",vetor[i]);
   }       
    
	free(vetor);//liberando o espaço de memória alocado 
    
	getchar();
	return 0;
}    