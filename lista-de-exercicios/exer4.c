#include <stdio.h>

int main(){
int soma = 0;
int matrix[3][4];


for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
scanf("%d", &matrix[i][j]);
}
}

for(int i = 0; i < 3; i++){
    printf("\n");
    for(int j = 0; j < 4; j++){
printf(" %d", matrix[i][j]);

}
printf("\n");
}

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
soma +=  matrix[i][j];

}

printf("soma:%d\n", soma);
soma = 0;
}}