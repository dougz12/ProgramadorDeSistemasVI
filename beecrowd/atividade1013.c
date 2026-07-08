#include <stdio.h>
//#include <stdlib.h>
 
int main() {
 int A,B,C,X;

 scanf("%d",&A);
 scanf("%d",&B);
 scanf("%d",&C);
 
 X=(A+ B + abs(A-B))/2;
 X=(X+ C + abs(X-C))/2;
printf("%d eh o maior", X);
    return 0;
}