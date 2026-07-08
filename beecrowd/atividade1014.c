#include <stdio.h>
//#include <stdlib.h>
 
int main() {
 int X;
 double Y, R;

 scanf("%d",&X);
 scanf("%lf" ,&Y);
 
 R=X/Y;
 

printf("%.3lf km/l\n", R);
    return 0;
}
