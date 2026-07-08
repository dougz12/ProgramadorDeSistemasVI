#include <stdio.h>
int main()
{
    int * n1, * n2;
    int numero1 = 0,  numero2 = 0;
    

    scanf("%d", &numero1);   
    scanf("%d", &numero2);
    n1 = &numero1;
    n2 = &numero2;
    if((*n1)>(*n2)){
    printf("O maior e:%d", numero1); 
    }if ((*n2)>(*n1)){
    printf("O maior e:%d", numero2); 
    }else {
        printf("os dois sao iguias");
    }


    return(0);
}
