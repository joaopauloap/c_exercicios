#include <stdio.h>
#include <stdlib.h>

int main() {    
    
    int n,i,*v;
   
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &n);
   
    v = (int *)malloc(n * sizeof(int));
   
    for (i = 0; i < n; ++i) {
         v[i] = i;
    }
   
    for (i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }

    free(v);
}