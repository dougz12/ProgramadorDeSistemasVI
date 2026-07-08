#include <stdio.h>
int main()
{
    int * p;
    int idade = 20;
    p = &idade;
     
    printf("%x\n", idade);

    p = 25;
   
    printf("%d\n",  idade);

    return(0);
}
