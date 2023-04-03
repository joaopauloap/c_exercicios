#include <stdio.h>

int main(){
  //valor é a variável que
  //será apontada pelo ponteiro
  int valor = 27;
  
  //declaração de variável ponteiro
  int *ptr;
  
  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;   //Para atribuir o endereço da variável valor ao ponteiro ptr utilizamos o operador de endereço &, pois estamos nos referindo ao endereço da variável valor e não ao conteúdo da mesma.
  
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereco da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);	
  
}