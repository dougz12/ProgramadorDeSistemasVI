#include <stdio.h>

int main(){

int matrix[4][4];
int i = 0, j= 0;
int soma = 0;

for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
scanf("%d", &matrix[i][j]);
}
}

for(int i = 0; i < 4; i++){
    printf("\n");
    for(int j = 0; j < 4; j++){
printf(" %d", matrix[i][j]);

}
}
 
for(int i = 0; i < 4; i++){
    printf("\n");
    for(int j = 0; j < 4; j++){
if(i == j){
soma = soma + matrix[i][j];
}

}

}
printf("%d", soma);

    return(0);
}