#include <stdio.h>
 
int main() {
int N,M,V,H;

scanf("%d", &N);

if (N >= 3600){
H=N/3600;
M = (N % 3600) / 60;
V= N%60;

}

if (N < 3600){
H =0;
M= N/60;
V= N%60;

}
 printf("%d:%d:%d", H,M,V);
    return 0;
}