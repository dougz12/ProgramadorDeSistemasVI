#include <stdio.h>

int main(){
int soma0 = 0, soma1 = 0, soma2 = 0;
int matrix[4][3];


for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
        scanf("%d", &matrix[i][j]);

}
soma0 +=  matrix[i][0];
soma1 +=  matrix[i][1];
soma2 +=  matrix[i][2];
}

for(int i = 0; i < 4; i++){
    printf("\n");
    for(int j = 0; j < 3; j++){
printf(" %d", matrix[i][j]);
}
printf("\n");
}

printf("soma:%d\n", soma0);
printf("soma:%d\n", soma1);
printf("soma:%d\n", soma2);
}