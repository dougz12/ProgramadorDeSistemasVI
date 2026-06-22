#include <stdio.h>
 
int main() {
int N;
int notas[]={100,50,20,10,5,2,1};

scanf("%d", &N);
for(int i= 0;i<7; i++){
    int qtd= N /notas[i];
    printf("%d notas de R$ %d,00\n", qtd, notas[i] );
    N= N%notas[i];
}

    return 0;
}