#include <stdio.h>
int main()
{
 char str[10] = "Joao";
 printf("\n\nString: %s", str);
 printf("\nSegunda letra: %c", str[1]);
 str[1] = 'U';
 printf("\nAgora a segunda letra eh: %c", str[1]);
 printf("\n\nString resultante: %s", str);
 getchar();
} 

