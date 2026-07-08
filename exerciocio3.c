#include <stdio.h>
int main()
{
    int * n;
    int numero = 0;
    
    scanf("%d", &numero);   
    n = &numero;
    *n = (*n) *2;
    printf("%d", numero); 


   
  

    return(0);
}
