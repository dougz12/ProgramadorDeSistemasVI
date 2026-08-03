#include <stdio.h>

int main(){

int matrix[3][3];
int i = 0, j= 0;
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
scanf("%d", &matrix[i][j]);
}
}
 
for(int i = 0; i < 3; i++){
    printf("\n");
    for(int j = 0; j < 3; j++){
printf(" %d", matrix[i][j]);

}
}
    return(0);
}