#include <stdio.h>
 
int main() {
int N,R,V;

scanf("%d", &N);

if (N < 3600){
R= N/60;
V= R % 60;
printf("0:%d:%d", R,V);
}
 
    return 0;
}