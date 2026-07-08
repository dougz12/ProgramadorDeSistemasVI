#include <stdio.h>
int main()
{
    int * p1, * p2, * p3;
    int num1 = 10, num2 = 20, num3 = 30;
    p1 = &num1;
    p2 = &num2;
    p3 = &num3; 

     printf("Variavel A =%d\n", num1);
     printf("Endereço = %x\n", p1);
     
     printf("Variavel B =%d\n", num2);
     printf("Endereco = %x\n", p2);

     printf("Variavel C =%d\n", num3);
     printf("Endereco = %x\n", p3);

    return(0);
}
