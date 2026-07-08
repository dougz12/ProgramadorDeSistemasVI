#include <stdio.h>
int main()
{
    int * n1, * n2, * n3;
    int numero1 = 0, numero2 = 0;
    
    scanf("%d", &numero1);   
    scanf("%d", &numero2);   
    
    printf("Antes:\n");
    printf("Numero 1:%d\n", numero1);
    printf("Numero 2:%d\n", numero2);
    
    n1 = &numero1;
    n2 = &numero2;
    *n3 = (*n1);
    *n1 = (*n2);
   *n2 = (*n3);

    printf("Depois:\n");
    printf("Numero 1:%d\n", numero1);
    printf("Numero 2:%d\n", numero2);
    


    return(0);
}
