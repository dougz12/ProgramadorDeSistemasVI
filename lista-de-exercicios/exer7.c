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
 
for(int i = 4; i > 0; i--){
    printf("\n");
    for(int j = 0; j < 4; j++){
        if(i+j==3){
        printf(" %d", matrix[i][j]);
        
        }
}
}

    return(0);
}