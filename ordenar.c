#include<stdio.h>
#define maxIndex 15
void main(){
	
	int vetor[maxIndex]={1,2,4,4,1,3,6,7,3,4,5};
	int new[maxIndex];
	int i,j,anterior;
	
	for(i=0;i<maxIndex;i++){
		
		for(j=0;j<maxIndex;j++){
		
			if((vetor[j]<=vetor[i])){
				anterior = vetor[i];
				vetor[i]=vetor[j];
				vetor[j] = anterior;
			}
			

		}
		
	}
	
	for(i=0;i<maxIndex;i++){
	printf("%d\n",vetor[i]);
	}
	
}