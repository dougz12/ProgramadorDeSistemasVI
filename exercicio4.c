#include <stdio.h>
int main()
{
    int * n1, * n2;
    int numero1 = 0, numero2 = 0;
    
    scanf("%d", &numero1);   
    scanf("%d", &numero2);   
    n1 = &numero1;
    n2 = &numero2;
    *n1 = +(*n2);

    printf("Numero 1:%d\n", numero1);
    printf("Numero 1:%d\n", numero1);
    printf("Reultado %d", * n1);


    return(0);
}
