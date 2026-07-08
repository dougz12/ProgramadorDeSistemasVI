#include <stdio.h>
int main()
{
    int * ptr;
    int numero = 50;
    ptr = &numero;
     
     printf("Endereço = %x\n", numero);
    printf("Endereço = %x\n", &numero);
    printf("Endereço = %x\n", ptr);
    printf("Valor = %d\n", * ptr);

    return(0);
}
