#include <stdio.h>

 
int main() {
 float distancia,c,v,r;   
 float x1, y1, x2, y2;
 double raiz =0.0,xk =0.0;

    
   scanf("%f %f\n %f %f", &x1, &y1, &x2, &y2);

   c = (x2-x1)*(x2-x1);
   v = (y2-y1)*(y2-y1);
   r= c+v;
xk=r;

 for(int i=0; i<1000; i++){
    raiz = 0.5*(xk +(r/xk));
    xk=raiz;
 }
 printf("%.4lf", raiz);


    return 0;
}