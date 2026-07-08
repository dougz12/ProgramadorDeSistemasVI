#include <stdio.h>
int main()
{
    int * n1, * n2;
    int numero1 = 0,  numero2 = 0, soma, subtracao, multiplicacao, divisao  ;
    

    scanf("%d", &numero1);   
    scanf("%d", &numero2);
    n1 = &numero1;
    n2 = &numero2;
    
    soma = (*n1)+(*n2);
    subtracao = (*n1)-(*n2);
    multiplicacao = (*n1)*(*n2);
    divisao = (*n1)/(*n2);

    printf("Soma:%d\n", soma);
    printf("Subtracao:%d\n", subtracao);
    printf("Multiplicacao:%d\n", multiplicacao);
    printf("Divisao:%d\n", divisao);

    return(0);
}