#include<stdio.h>
intmain(){
double raiz =0.0, x=0.0, xk =0.0;
 printf("informe o numero que deseja caçcular a raiz quadrada\n");
 scanf("%lf", &x);

 xk=x;

 for(int i=0; i<1000; i++){
    raiz = 0.5*(xk +(x/xk));
    xk=raiz;
 }
 return(0);
}